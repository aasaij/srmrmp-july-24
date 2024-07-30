//Program to demonstrate bsearch()
#include <stdio.h>
#include <stdlib.h>
int compare(const void* x, const void* y){
	return *(int*)x - *(int*)y;
}
int main(){
	int arr[] = {10,20,30,40,50,60};
	int size = sizeof(arr) / sizeof(arr[0]);
	int search, *result;
	scanf("%d", &search);
	result = bsearch(&search, arr,size,sizeof(int),compare);
	printf("%s", result?"Found":"Not Found");
	return 0;
}