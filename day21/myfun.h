void printArray(int arr[], int size){
	for (int i = 0; i<size; i++)
		printf("%d ", *(arr+i));
}

void swap(int *x,  int* y){
	*x = (*x+*y) - (*y = *x);
}