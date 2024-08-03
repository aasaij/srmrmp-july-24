//Program to demonstrate Binary Tree
#include <stdio.h>
#include <stdlib.h>
struct Node{
	char data; // 1
	struct Node *left; // 8
	struct Node *right; // 8
}node;
node* createNode(char data){
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->left = temp->right = temp->mid = NULL;
	return temp;
}
void inorder(node *root){
	if (root){
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
int main(){
	node *root = createNode('A')
	root->left = createNode('B');
	root->right = createNode('C');
	root->left->left = createNode('D');
	root->left->right = createNode('E');
	root->right->left = createNode('F');
	root->right->right = createNode('G');

	return 0;
}

Attendance Link : https://bit.ly/CC-010824
Test Link : https://tinyurl.com/48tumfer
