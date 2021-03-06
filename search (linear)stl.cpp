#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);
    int key;
    cout << "enter any key to be searched:\t";
    cin >> key;
    auto it = find(a, a + n, key);
    cout << it << "\n";
    int index = it - a;
    if (index == n)
        cout << "key not found"
             << "\n";
    else
        cout << index << "\n";
    return 0;
}
