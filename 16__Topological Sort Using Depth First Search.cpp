#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100], color[100], startingTime[100], finishingTime[100];
int node, edge, Time = 1;
stack<int> ans;

void dfsVisit(int x)
{
	startingTime[x] = Time++;
	color[x] = GRAY;

	for(int i = 0; i < node; ++i){
		if(adj[x][i] == 1)
		{
			if(color[i] == WHITE)
				dfsVisit(i);
		}
	}
	color[x] = BLACK;
	finishingTime[x] = Time++;
	ans.push(x);
}

void dfs()
{
	for(int i = 0; i < node; ++i){
		color[i] = WHITE;
	}
	for(int i = 0; i < node; ++i){
		if(color[i] == WHITE){
			dfsVisit(i);
		}
	}
}
int main()
{
	freopen("input1.txt", "r", stdin);
	scanf("%d%d", &node, &edge);
	int n1, n2;
	for(int i = 0; i < edge; ++i){
		scanf("%d %d", &n1, &n2);
		adj[n1][n2] = 1;
	}
	dfs();

	cout<<"After topological sort the elements are: ";
	while(!ans.empty()){
		cout<<ans.top() <<" ";
		ans.pop();
	}
	cout<<endl;

	return 0;
}
