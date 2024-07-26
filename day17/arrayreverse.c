//Program to reverse an array using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr, size;
	scanf("%d", &size);
	//allocating memory dynamically
	arr = (int*)malloc(sizeof(int)*size);
	//Checking whether the memory is allotted
	if (arr!=NULL){ 
		//Getting array elements from the user
		for (int i = 0; i<size; i++)
			scanf("%d", arr+i); //  scanf("%d", &arr[i]);
		//Reversing the array elements
		for (int i = 0, j = size-1; i<j; i++, j--){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		//printing the array elements
		for (int i = 0; i<size; i++)
			printf("%d ", *(arr+i)); //  scanf("%d", &arr[i]);
		//clearing the memory which is allocated dynamically
		free(arr);
	}
	else{
		printf("Insufficient memory");
	}	
}