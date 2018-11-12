#include<stdio.h>
#include<iostream>
#include<vector>
#define SIZE 10004
using namespace std;

vector <int> v[SIZE];
bool visit[SIZE];

void dfsVisit(int n)
{
	visit[n] = true;
	for(int i = 0; i < v[n].size(); ++i){
		int x = v[n][i];
		if(visit[x] == false)
			dfsVisit(x);
	}
}

int main()
{
	int t;
	scanf("%d", &t);

	for(int tt=0; tt < t; ++tt)
	{
		int n, m, l, n1, n2, x;
		scanf("%d %d %d", &n, &m, &l);

		for(int i = 0; i < n + 1; ++i){
			visit[i] = false;
			v[i].clear();

		}
		for(int i = 0; i < m; ++i){
			scanf("%d %d", &n1, &n2);
			v[n1].push_back(n2);
		}
		for(int i = 0; i < l; ++i){
			scanf("%d", &x);
			dfsVisit(x);
		}
		int cnt = 0;
		for(int i = 0; i < n+1; ++i){
			if(visit[i])
				cnt++;
		}
		printf("%d\n", cnt);
	}

	return 0;
}
