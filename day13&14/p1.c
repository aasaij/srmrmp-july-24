#include <stdio.h>

int main(){
	int x = 7, y, z;
	y = ++x;
	z = x-- + --y;
	printf("%d %d %d", x, y, z);
	return 0;
}