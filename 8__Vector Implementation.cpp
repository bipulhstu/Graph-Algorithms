#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> vec;
	vec.push_back(10);
	vec.push_back(15);
	vec.push_back(20);
	vec.push_back(25);

	for(int i = 0; i < vec.size(); ++i){
		printf("%d\n", vec[i]);
	}

}
