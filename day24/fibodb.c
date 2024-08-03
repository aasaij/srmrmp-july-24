//Program to find nth term fibonacci series using recursion
#include <stdio.h>
int fib(int n){
	int memo[n+1];
	memo[0] = 0;
	memo[1] = 1;
	for (int i = 2; i<=n; i++)
		memo[i] = memo[i-1]+memo[i-2];
	return memo[n];
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}
