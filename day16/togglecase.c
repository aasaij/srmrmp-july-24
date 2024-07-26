//Program to convert string into toggle case
#include <stdio.h>
int main(){
	char str[100];
	scanf("%s", str);
//	fgets(str, 99, stdin);
//	 str[strlen(str)-1] = '\0';
	for(int index = 0; str[index]!='\0'; index++){
		//checking whether the char is upper case 
		if (str[index]>=65 && str[index]<=90)
		//if soo. convert into lower case
			str[index] +=32;
		//checking whether the char is lower case
		else if (str[index]>=97 && str[index]<=122)
			//if soo. convert into upper case
			str[index]-=32;	
	}
	puts(str);
	return 0;
}