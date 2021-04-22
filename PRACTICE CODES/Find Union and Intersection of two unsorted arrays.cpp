// CPP program to find union and intersection
// using sets
#include <bits/stdc++.h>
using namespace std;

// Prints union of arr1[0..n1-1] and arr2[0..n2-1]
void printUnion(int arr1[], int arr2[], int n1, int n2)
{
	set<int> hs;

	// Inhsert the elements of arr1[] to set hs
	for (int i = 0; i < n1; i++)
		hs.insert(arr1[i]);

	// Insert the elements of arr2[] to set hs
	for (int i = 0; i < n2; i++)
		hs.insert(arr2[i]);

	// Print the content of set hs
	for (auto it = hs.begin(); it != hs.end(); it++)
		cout << *it << " ";
	cout << endl;
}

// Prints intersection of arr1[0..n1-1] and
// arr2[0..n2-1]
void printIntersection(int arr1[], int arr2[], int n1,
					int n2)
{
	set<int> hs;

	// Insert the elements of arr1[] to set S
	for (int i = 0; i < n1; i++)
		hs.insert(arr1[i]);

	for (int i = 0; i < n2; i++)

		// If element is present in set then
		// push it to vector V
		if (hs.find(arr2[i]) != hs.end())
			cout << arr2[i] << " ";
}

// Driver Program
int main()
{
	int arr1[] = { 7, 1, 5, 2, 3, 6 };
	int arr2[] = { 3, 8, 6, 20, 7 };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	// Function call
	printUnion(arr1, arr2, n1, n2);
	printIntersection(arr1, arr2, n1, n2);

	return 0;
}
