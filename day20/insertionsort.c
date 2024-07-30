//Program to implement insertion sort algorithm
#include<stdio.h>
//Printing array elements
void printArray(int arr[], int n){
	for (int i = 0; i<n; i++)
		printf("%d ", arr[i]);
}
//implementing insertion sort algorithm
void insertionSort(int arr[], int size){
	for (int i = 1; i<size; i++){
		int key = arr[i], j, k;
		for (j = i-1,k=0;j>=0 && arr[j]>key;j--, k++){
			arr[i-k]  = arr[j];
		}
		arr[j+1] = key;
	}
}
int main(){
	int arr[] = {23, 1, 10, 5, 2};
	int size = sizeof(arr)/ sizeof(arr[0]);
	insertionSort(arr, size);
	printArray(arr, size);
	return 0;
}