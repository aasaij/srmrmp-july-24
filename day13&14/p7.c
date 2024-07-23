#include <stdio.h>
int x;
int main(){
	//int x = 20 ; //local variable for main
	for(x = 1; x<=10; x++);
	{
		x = 100;
		printf("%d", x);
	}
	printf("\n%d", x);
	
	return 0;
}