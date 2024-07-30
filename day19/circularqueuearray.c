//Circular Queue implementation using Array
#include <stdio.h>
#include <stdbool.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
bool isFull(){
	return (rear == MAX-1 && front == 0) || (rear+1 == front);
}
bool isEmpty(){
	return rear == -1;
}
bool enqueue(int value){
	if (!isFull()){
		if (front == -1)
			front = 0;
		rear = (rear+1) % MAX;
		queue[rear] = value;
		return true;
	}
	return false;		
}
bool dequeue(){
	if (!isEmpty()){
		if ( front == rear){
			front = -1;
			rear = -1;
		}
		else{
			front = (front+1)% MAX;
		}			
		return true;
	}
	return false;
}
int* displayFront(){
	if (!isEmpty())
		return &queue[front];
	return NULL;
}
int main(){
	int choice;
	while(1){ //infinite loop
		int data;
		bool result;
		printf("Queue Operation\n")	;
		printf("***************\n");
		printf("1. Enqueue\n");
		printf("2. Dequeue\n");
		printf("3. Display Front\n");
		printf("4. Exit\n");
		printf("Enter your choice : ");
		scanf ("%d", &choice);
		switch(choice){
			case 4:
				printf("Thank you!");
				return 0;
			case 1:
				printf("Enter an element :");
				scanf("%d", &data);
				result = enqueue(data);
				if (result)
					printf("Enqueued!\n");
				else
					printf("Queue is full\n");
				break;
			case 2:
				result = dequeue();
				printf("%s", result?"Dequeued\n":"Queue is empty\n");
				break;
			case 3:
			{
				int *data = displayFront();
				if (data==NULL)
					printf("Queue is empty\n");
				else
					printf("Top element : %d\n", *data);
			}				
		}
	}		
	return 0;
}