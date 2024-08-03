#include <stdio.h>
#include <stdlib.h>
struct Node{
	char data; // 1
	struct Node *left; // 8
	struct Node *mid; // 8
	struct Node *right; // 8
}node;
node* createNode(char data){
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->left = temp->right = temp->mid = NULL;
	return temp;
}
int main(){
	node *root = createNode('A')
	node *c1, *c2, *c3;
	c1 = createNode('B');
	c2 = createNode('C');
	c3 = createNode('D');
	root->data = 'A';
	root->left = c1;
	root->right = c3;
	root->mid = c2;
	return 0;
}