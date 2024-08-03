//Selection sort --> Greedy method
#include <stdio.h>
#include ".\..\day21\myfun.h"
void selectionSort(int arr[], int n){
	for (int i = n-1; i>=0; i--){
		int maxIndex = i;
		for (int j = 0;j<i; j++)
			if ( arr[maxIndex]<arr[j])
				maxIndex = j;
		if ( maxIndex!= i)	
			swap(arr+maxIndex, arr+i);
	}
}
int main(){
	int arr[] = {10,11,19, 7, 8 ,21,15};
	int size = sizeof(arr)/ sizeof(arr[0]);
	selectionSort(arr, size);
	printArray(arr, size);
	return 0;
}