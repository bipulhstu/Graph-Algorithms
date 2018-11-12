#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue <int> q;
	q.push(1);
	q.push(10);
	q.push(3);
	q.push(4);

	while(!q.empty())
	{
		int x;
		x = q.front();
		printf("%d\n", x);
		q.pop();
	}
	return 0;
}
