#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root;

void insert(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = value;
    newNode->left = NULL;
	newNode->right = NULL;
	///Case 1: If root node is null
	if(root == NULL)
	{
		root = newNode;
	}
	///Case 2: if root node is not null
	else
	{
		struct Node* temp = root;
		while(1)
		{
			if(newNode->data <= temp->data)
			{
				//left
				if(temp->left == NULL)
					{
						temp->left = newNode;
						break;
					}
				else
				{
					temp = temp->left;
				}

			}
			else
			{
				//right
				if(temp->right == NULL)
				{
					temp->right = newNode;
					break;
				}
				else
				{
					temp = temp->right;
				}
			}

		}
	}
}

void postorder(struct Node* r)
{
	if(r == NULL)
		return;
	///left subtree
	postorder(r->left);

	///right subtree
	postorder(r->right);

	printf("%d ", r->data);

}
int main()
{
	root = NULL;
	insert(55);
	insert(40);
	insert(80);
	insert(34);
	insert(28);
	insert(38);
	insert(60);
	insert(90);

	postorder(root);
}




