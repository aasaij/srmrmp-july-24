#include <stdio.h>

int main(){
	int x = 10, *ptr = &x;
	printf("%p\n", ptr);// BD4
	*ptr = 100;
	printf("%d\n", *ptr); 
	*ptr++ = 200;
	*++ptr= 300;
	printf("%p\n", ptr); 
	printf("%d", *ptr); 
	return 0;
}
