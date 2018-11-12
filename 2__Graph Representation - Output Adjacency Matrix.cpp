///Taking the graph as an input and print using array
#include<stdio.h>
#include<iostream>
using namespace std;

int adj[100][100];

int main()
{
	freopen("input1.txt", "r", stdin);
	int node, edge;
	//printf("Enter the number of nodes: \n");
	scanf("%d", &node);

	//printf("Enter the number of edges: \n");
	scanf("%d", &edge);

	int n1, n2;   ///for 2D array input

	for(int i = 0; i < edge; ++i)
	{
		scanf("%d %d", &n1, &n2);
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}

	for(int i = 0; i < node; ++i)
	{
		for(int j = 0; j < node; ++j)
		{
			printf("%d\t", adj[i][j]);
		}
		printf("\n");
	}

}
/*
input:
input1.txt
output:
0       1       1       0       0
1       0       1       1       1
1       1       0       0       0
0       1       0       0       1
0       1       0       1       0
*/

