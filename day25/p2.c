#include <stdio.h>
//macro
#define cube(x) (x*x*x)
//int cube(int x){
//	return x * x * x;
//}
int main(){
	#ifdef cube
		#undef cube
	#endif		
	#ifndef cube
		#define cube(x) (x*x*x)
	#endif		
	
	printf("%d", 27/cube(3));
//	printf("%d", 27/(3*3*3))
	return 0;
}