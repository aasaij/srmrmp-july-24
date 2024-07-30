#include <stdio.h>
#include <stdlib.h>
int main(){
	int x, y, max, min;
	x = 10, y = 20;
	max = ((x+y) + abs(x-y))/2;
	min = ((x+y) - abs(x-y))/2;
	printf("%d %d", max, min);
	return 0;
}