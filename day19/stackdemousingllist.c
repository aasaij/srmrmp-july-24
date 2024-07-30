//Program to demonstrate stack using LinkedList
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct Node{
	int data;
	struct Node *nxt;
}node;
node* createNode(int data){
	node* temp = (node*)malloc(sizeof(node));
	if (temp == NULL)
		return NULL;
	temp->data = data;
	temp->nxt = NULL;
	return temp;
}
bool isEmpty(node * stack){
	return stack == NULL;
}
int* peek(node* stack){
	if (isEmpty(stack))
		return NULL;
	else
		return &stack->data;
}
node* pop(node* stack, int *element){
	node *temp;
	*element = stack->data;
	temp = stack;
	stack=temp->nxt;
	free(temp);			
	return stack;	
}
node* push(node* stack, int data, bool *result){
	node* temp = createNode(data);
	*result = false;
	if(temp){
		temp->nxt = stack;
		stack = temp;
		*result = true;
	}
	return stack;
}
int main(){
	node *stack=NULL;
	int choice;
	while(1){ //infinite loop
		int data;
		bool result;
		printf("Stack Operation\n")	;
		printf("***************\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Exit\n");
		printf("Enter your choice : ");
		scanf ("%d", &choice);
		switch(choice){
			default:
				printf("Thank you!");
				return 0;
			case 1:
				printf("Enter an element :");
				scanf("%d", &data);
				stack = push(stack, data, &result);
				if (result)
					printf("Pushed!\n");
				else
					printf("Stack overflow\n");
				break;
			case 2:{
				if (!isEmpty(stack)){
					int element;
					stack = pop(stack,&element);
					printf("Removed element : %d\n", element);
				}
				else
					printf("Stack underflow");
			}
			break;
			case 3:
			{
				int *data = peek(stack);
				if (data==NULL)
					printf("Stack underflow\n");
				else
					printf("Top element : %d\n", *data);
			}				
		}
	}		
	return 0;
}


//Attendance : https://bit.ly/RA-290724
//Trainer : Tambi
//Session : FN
