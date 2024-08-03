#include <stdio.h>

int main(){
	int x = 10;
	static int y = x;
	if ( x == y)
		printf("You are all very interactive!");
	else
		printf("You are very slient!");
	return 0;
}