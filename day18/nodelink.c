#include <stdio.h>
#include <stdlib.h>
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
node *append(node *list, int value){
    node* temp = createNode(value);
    if ( list == NULL)    
        return temp;
    else{
        node *t1 = list;
        while (t1->nxt != NULL)
            t1 = t1->nxt;
        t1->nxt = temp;
        return list;
    }
}
node* insert(node* list, int value){
	node* temp = createNode(value);
	temp->nxt = list;
	list = temp;
	return list;
}
int countNodes(node* list){
	int cnt = 0;
	node* temp = list;
	while (temp){
		cnt++;
		temp = temp->nxt;
	}
	return cnt;
}
node* insertAt(node* list, int value, int pos){
	if ( pos <= 1)
		return insert(list, value);
	else if (pos > countNodes(list))
		return append(list, value);
	else{
		node* temp = createNode(value);
		node *t1 = list;
		for (int i = 2; i<pos; i++)
			t1 = t1->nxt;
		temp->nxt = t1->nxt;
		t1->nxt = temp;
		return list;
	}
}
void printList(node *list){
	node *temp = list;
	while (temp->nxt != NULL){
		printf("%d->",temp->data);
		temp = temp->nxt;
	}
	printf("%d", temp->data);
}
int main(){
    node *root = NULL;
    root = append(root, 10);
    root = append(root, 20);
    root = append(root, 30);
    root = insert(root, 7);
    root = insertAt(root,25, 4);
    root = insertAt(root,5, 0);
    root = insertAt(root,50, 10);
//    printf("%d", countNodes(root));
    printList(root);
    return 0;
}
//https://bit.ly/WE-270724
