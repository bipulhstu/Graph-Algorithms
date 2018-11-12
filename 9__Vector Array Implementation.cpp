#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vec[3];
	vec[0].push_back(10);
	vec[0].push_back(20);
	vec[2].push_back(30);

	//printf("%d\n", vec[0].size());
	//printf("%d\n", vec[0][1]);

	for(int i = 0; i < vec[0].size(); ++i){
		printf("%d\n", vec[0][i]);
	}

}

