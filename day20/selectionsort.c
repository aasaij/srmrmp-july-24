//Program to implement selection sort algorithm
#include <stdio.h>
void swap(int *x, int* y){
	*x = (*x+*y)- (*y = *x);
}
//Printing array elements
void printArray(int arr[], int n){
	for (int i = 0; i<n; i++)
		printf("%d ", arr[i]);
}
//Implementing selection sort algorithm
void selectionSort(int arr[], int size){
	for (int i = 0; i<size; i++){
		int minIndex = i;
		for (int j = i+1;j<size; j++){
			if ( arr[minIndex]>arr[j])
				minIndex = j;
		}
		if (minIndex != i)
			swap(arr+minIndex, arr+i);
	}
}

int main(){
	int arr[] = {10,11,7,9,3,4 ,12};
	int size = sizeof(arr)/ sizeof(arr[0]);
	selectionSort(arr, size);
	printArray(arr, size);
	return 0;
}



Attendance : https://bit.ly/ZO-300724
