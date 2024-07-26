//program to demonstrate function 
#include <stdio.h>
//function declaration
void greet(void);
void wishMe(void);
int main(){
		//function calling
		greet();
		wishMe();
	return 0;
}
void wishMe(){
	greet();
}
//function definition
//function without arguments and no return values
void greet(){
	printf("Good afternoon!");
}

////function definition syntax
//<return_type> <function_name> (<parameter_list>){
//	<function_body>
//}
//
////function calling
//<result> = <function_name>(<argument_list>);
//
////function decalration or function proto-type
//<return_type> <function_name> (<argument_list_types>);