//Program to implement bubble sort algorithm
#include <stdio.h>
//Swapping both values
void swap(int *x, int* y){
	*x = (*x+*y)- (*y = *x);
}
//Printing array elements
void printArray(int arr[], int n){
	for (int i = 0; i<n; i++)
		printf("%d ", arr[i]);
}
//implementing bubble sort algorithm
void bubbleSort(int arr[], int size){
	for (int i = 0; i<size-1;i++ )
		for (int j = 0; j<size-i-1; j++)
			if (arr[j]>arr[j+1])
				swap(arr+j, arr+j+1);	
}
int main(){
	int arr[] = {10,11,7,9,3,4 ,12};
	int size = sizeof(arr)/ sizeof(arr[0]);
	bubbleSort(arr, size);
	printArray(arr, size);	
	return 0;
}
//10 20 30 7 