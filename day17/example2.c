//Program to demonstrate dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *arr, size;
	scanf("%d", &size);
	arr = (int *)malloc(size * sizeof(int));
	arr[0] = 100;
	return 0;
}