///Taking the graph as an input and print using array
#include<stdio.h>
#include<iostream>
using namespace std;

int adj[100][100];

int main()
{
	freopen("input1.txt", "r", stdin);
	int node, edge;
	scanf("%d", &node);

	scanf("%d", &edge);

	int n1, n2;   ///for 2D array input

	for(int i = 0; i < edge; ++i)
	{
		scanf("%d %d", &n1, &n2);
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}

	///Find adjacent node
	for(int i = 0; i < node; ++i)
	{
		if(adj[1][i] == 1)  ///finding adjacent node
			printf("%d ", i);
	}

	return 0;

}



