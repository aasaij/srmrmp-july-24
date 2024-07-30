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
node* deleteFirstNode(node* list){
	if (list){
		node *temp = list;
		list = temp->nxt;
		free(temp);
		return list;	
	}
	else
		return NULL;
}
node *deleteLastNode(node *list){
	if (!list)
		return NULL;
	else if (list->nxt == NULL){
		node *temp = list;
		list = NULL;
		free(temp);
		return list;
	}
	node *temp = list;
	while(temp->nxt->nxt != NULL) temp = temp->nxt;
	node* t1 = temp->nxt;
	temp->nxt = NULL;
	free(t1);
	return list;
}
node* deleteAt(node* list, int pos){
	int numNodes = countNodes(list);
	if ( pos == 0 || pos == 1){
		return deleteFirstNode(list);
	}
	else if (pos == numNodes){
		return deleteLastNode(list);
	}
	else if ( pos > 1 && pos < numNodes){
		node *temp = list;
		for (int i =2; i<pos; i++)
			temp = temp->nxt;
		node *t1 = temp->nxt;
		temp->nxt = t1->nxt;
		free(t1);
		return list;
	}	
}
void printList(node *list){
	if(list){
		node *temp = list;
		while (temp->nxt != NULL){
			printf("%d->",temp->data);
			temp = temp->nxt;
		}
		printf("%d", temp->data);
	}
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
    puts("");
    root = deleteFirstNode(root);
    printList(root);
    root = deleteLastNode(root);
    puts("");
    printList(root);
    root = deleteAt(root, 3);
    puts("");
    printList(root);    
    return 0;
}
//https://bit.ly/WE-270724
