//Program to demonstrate call by value and call by ref
#include <stdio.h>
//Call by value or pass by value
//void swap(int x, int y){
//	int temp = x;
//	x = y;
//	y = temp;
//}
//Call by reference
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
void print(int x, int y){
	printf ("%d %d\n", x, y);
}
int main(){
	int x,y;
	x = 10, y = 20;
	print(x,y);
	swap(&x,&y);
	print(x,y);
	return 0;
}