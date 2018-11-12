 #include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vec[5];
	int node, edge;

	scanf("%d %d", &node, &edge);

	int n1, n2;
	for(int i = 0; i < edge; ++i){
		scanf("%d %d", &n1, &n2);
		vec[n1].push_back(n2);
		vec[n2].push_back(n1);
	}
	///neighbors of node 3
	for(int i = 0; i < vec[3].size(); ++i){
		printf("%d\n", vec[3][i]);
	}

    return 0;
}
/*
Input:
5 6
0 1
0 2
1 2
1 3
1 6
3 4
adjacency list:
0 -> 1, 2
1 -> 0, 2, 3, 6
2 -> 0, 1
3 -> 1, 4
4 -> 3
*/


