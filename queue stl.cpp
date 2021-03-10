#include <iostream>
#include<queue>
using namespace std;

int main() 
{
	//initilize
	queue<int>q;
	//adding in the queue
	for(int i=0;i<7;i++)
	{
	               q.push(i);
	}
	//finding the first momber of queue
	while(!q.empty())
	{
	               std::cout << q.front() << ":";
	               q.pop();
	}
	return 0;
}
