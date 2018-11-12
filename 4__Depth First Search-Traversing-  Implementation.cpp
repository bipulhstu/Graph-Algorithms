///Taking the graph as an input and print using array
#include<stdio.h>
#include<iostream>

#define WHITE 1
#define GRAY 2
#define BLACK 3
using namespace std;

int adj[100][100];
int color[100];

int node;
int edge;
void dfs_visit(int x)
{
	color[x] = GRAY;
	///find neighbor or adjacent
	for(int i = 0; i < node; ++i){
		if(adj[x][i] == 1){
			if(color[i] == WHITE){
				dfs_visit(i);
			}
		}
	}


	color[x] = BLACK;
}
void dfs()
{
	for(int i = 0; i < node; ++i)
	{
		color[i] = WHITE;
	}
	for(int i = 0; i < node; ++i)
	{
		if(color[i] == WHITE){
			dfs_visit(i);
		}
	}
}

int main()
{
	freopen("input1.txt", "r", stdin);
	scanf("%d %d", &node, &edge);

	int n1, n2;   ///for 2D array input
	for(int i = 0; i < edge; ++i)
	{
		scanf("%d %d", &n1, &n2);
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}
    dfs();

}




