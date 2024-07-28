#include <stdio.h>
//void change(int arr[]){
//	arr[0] = 100;
//}
void swap(int *x, int *y){
	*x = (*x+*y) - (*y=*x);
}
void reverse(int arr[], int size){
	for(int i = 0; i<size/2; i++)	
		swap(arr+i,arr+(size-i-1));
}
void print(int arr[], int size){
	for (int i = 0; i<size; i++)
		printf("%d ", *(arr+i));
}
int main(){
	int arr[] = {10,20,30, 7,45,678};
	int size = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, size);
	print(arr, size);
	return 0;
}