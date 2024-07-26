#include <stdio.h>
int main(){
	int x = 10;
	//ptr is going to point an integer
	int *ptr; //pointer declaration
	ptr = &x;
	printf("%d\n", x);
	printf("%d\n", *(&x));
	printf("%d", *ptr);
	*ptr = 100;
}

//& --> Address operator
//* --> value of or dereference or indirection operator