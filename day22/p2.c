#include <stdio.h>
int fun(){
	static int x = 10;
	printf("%p ", &x);
	return x++;
}
int main(){
	for(int i = 1; i<=10; i++){
		printf("%d \n", fun());
	}
	return 0;
}