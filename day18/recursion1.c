#include <stdio.h>
int x = 10;
int main(){
	if ( x == 50)
		return 0;
	printf("%d ", x++);
	main();
	return 0;
}