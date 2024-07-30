//Program to implement Stack using Array
#include <stdio.h>
#include <stdbool.h>
#define MAX 5
int top = -1;
bool isEmpty(){
	return top == -1;
}
bool isFull(){
	return top == MAX -1;
}
bool push(int stack[],int element){
	if ( !isFull()){
		top++;
		stack[top] = element;
		return true;
	}
	return false;
}
int* pop(int stack[]){
	if (!isEmpty()){
		return &stack[top--];
	}
	return NULL;
}
int* peek(int stack[]){
	if (!isEmpty())
		return &stack[top];
	else
		return NULL;
}
int main(){
	int stack[MAX], choice;
	while(1){ //infinite loop
		int data;
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
				if (push(stack,data))
					printf("Pushed!\n");
				else
					printf("Stack overflow\n");
				break;
			case 2:{
				int *data = pop(stack);
				if (data==NULL)
					printf("Stack underflow\n");
				else
					printf("Removed element : %d\n", *data);
				break;
			}
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