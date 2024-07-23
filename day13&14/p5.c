#include <stdio.h>

int main(){
	char x = 250; 
//	0000 0000  Method - 1
//	1 111 1010 ==> negative binary
//	
//	0 000 0101 ==> 1-s complement
//	0 000 0001 (+)
//	==========
//	0 000 0110  ==> -6
//	
//	Method 2
//	
//	char range  ==> -128 to 127
//	a.v = 250 ==> 250 - 127 ==> 123
//	previous value of min value + 123
//	-129 + 123 = -6
	
	
	
	int y; 
	//y = -6 + 0 + 5 + (-5) 
	//y = 250 + 0 + -251 + 251
	y = x + !x + ~x + ++x;
	printf("%d", y);
	return 0;
}