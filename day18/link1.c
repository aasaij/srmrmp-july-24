#include <stdio.h>
typedef struct Node {
	int data; // 4
	struct Node *nxt; // 8
}node;
node *createNode(int value){
	node *temp;
	temp =(node *) malloc(sizeof(node));
	temp->data = value;
	temp->nxt = NULL;
	return temp;
}
int main(){
	node x, y, z;
	x.data = 100;
	x.nxt = &y;
	y.data = 200; // x.nxt->data = 200
	y.nxt = &z;
	z.data = 300; //x.nxt->nxt->data = 300
	printf("%d", x.nxt->nxt->data);
}