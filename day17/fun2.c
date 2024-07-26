#include <stdio.h>
void greet(){
	printf("Good afternoon!");
}
//Function with argument and return value
int isOdd(int n){
	return n % 2;
//	if (n % 2 == 1)
//		return 1;
//	else
//		return 0;
}
int isEven(int n){
	return !(n % 2);
}
int add(int x, int y){
	return x + y;
}
int main(){
//	greet();
	printf("%d", add(100,200));
	return 0;
}