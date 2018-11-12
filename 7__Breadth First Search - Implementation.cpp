#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

int adj[100][100];
int color[100];
int parent[100];
int dist[100];

#define WHITE 1
#define GRAY 2
#define BLACK 3

int node, edge;

void bfs(int startingNode)
{
	for(int i = 0; i < node; ++i){
		color[i] = WHITE;
		dist[i] = INT_MIN;
		parent[i] = -1;
	}
	dist[startingNode] = 0;
	parent[startingNode] = -1;

	queue <int> q;
	q.push(startingNode);
	while(!q.empty())
	{
		int x ;
		x = q.front();
		q.pop();
		color[x] = GRAY;
		printf("%d\n", x);
		//some work
		for(int i = 0 ; i < node; ++i){
			if(adj[x][i] == 1){
				if(color[i] == WHITE){
				     //x er neighbor i
				     //x is the parent of i
				     dist[i] = dist[x] + 1;
				     parent[i] = x;
				     q.push(i);
				}
			}
		}


		color[x] = BLACK;
	}
}

int main(){
    freopen("bfs.txt", "r", stdin);
    scanf("%d %d", &node, &edge);

    int n1, n2;

    for(int i = 0; i < edge; i++){
		scanf("%d %d", &n1, &n2);
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
    }
    bfs(0);
    printf("\n\nDistance of 5 is %d\n", dist[5]);
    printf("\n\nParent of 6 is %d\n", parent[6]);

    return 0;
}
