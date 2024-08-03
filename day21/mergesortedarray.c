//Program to Merge two sorted array
#include <stdio.h>

int main(){
	int arr1[] = {10,20,30,40,50};
	int arr2[] = {20,35,45,55,60};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	int merge[n1+n2], i, j,k;
	for (i =0, j = 0, k=0; i<n1 && j < n2;){
		//checking first array element is less than second array element
		if (arr1[i]<arr2[j])
			merge[k]= arr1[i++];
		else
			merge[k]= arr2[j++];
		k++;
	}
	//checking whether data exists in array 1
	while(i<n1)
		merge[k++] = arr1[i++];
	//checking whether data exists in array 2		
	while(j<n2)		
		merge[k++] = arr2[j++];
	//Printing the merged array elements
	for (int i = 0; i<n1+n2; i++)		
		printf("%d ", merge[i]);
	return 0;
}
//Attendance : https://bit.ly/GH-310724
//Trainer :Tambi
//Session : FN


