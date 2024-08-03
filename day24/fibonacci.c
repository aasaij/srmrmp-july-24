//Program to find nth term fibonacci series using recursion
#include <stdio.h>

int fib(int n){
	if (n==0 || n == 1)
		return n;
	return fib(n-1)+fib(n-2);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}


//Morning Quiz Time : 10.35 to 11.05