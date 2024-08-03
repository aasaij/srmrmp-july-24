//Program to implement merge sort algorithm
#include <stdio.h>
#include  "myfun.h"
void merge(int arr[], int low, int middle, int high){
	int n1 = middle-low+1;
	int n2 = high - middle;
	int L[n1], R[n2];
	for (int i = 0; i<n1; i++)
		L[i] = arr[low+i];
	for (int i = 0; i<n2; i++)
		R[i] = arr[middle+1+i];
	int i=0, j=0, k= low;
	while (i<n1 && j < n2){
		if (L[i]<R[j])
			arr[k] = L[i++];
		else
			arr[k] = R[j++];
		k++;			
	}
	while (i<n1)
		arr[k++] = L[i++];
	while (j<n2)		
		arr[k++] = R[j++];
}
void mergeSort(int arr[], int low, int high){
	if ( low < high){
		int middle = (low + high) / 2;
		mergeSort(arr, low, middle);
		mergeSort(arr, middle+1, high);
		merge(arr, low, middle, high);
	}
}
int main(){
	int arr[] = {10, 8, 4, 12, 11, 16};
	int size = sizeof(arr)/ sizeof(arr[0]);
	mergeSort(arr, 0, size-1);
	printArray(arr, size);
	return 0;
}