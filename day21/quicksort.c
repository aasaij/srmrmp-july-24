//Program to implement quick sort algorithm
#include <stdio.h>
void swap(int *x,  int* y){
	*x = (*x+*y) - (*y = *x);
}
int partition(int arr[], int low, int high){
	int pivot = arr[low];
	int lb= low, ub = high;
	while (lb < ub){
		while (arr[lb]<=pivot && lb < high)
			lb++;
		while (arr[ub]>pivot && ub > low)
			ub--;
		if ( lb < ub)			
			swap(arr+lb, arr+ub);
	}
	swap(arr+low, arr+ub);
	return ub;
}
void quickSort(int arr[], int low, int high){
	if ( low < high){
		int pivotIndex = partition(arr, low, high);
		quickSort(arr, low, pivotIndex-1); //left sub-array
		quickSort(arr,pivotIndex+1, high); //right sub-array
	}
}
void printArray(int arr[], int size){
	for (int i = 0; i<size; i++)
		printf("%d ", *(arr+i));
}
int main(){
	int arr[] = {10, 2, 5,15, 17, 4,9, 12};
	int size = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, size-1);
	printArray(arr, size);
	return 0;
}