//Program to extract vowels from  a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char str[100], *v_str, vowels[] = "aeiouAEIOU";
	scanf("%[^\n]s", str);
	v_str = (char*)malloc(strlen(str)+1) ;
	if (v_str!= NULL){
		int j=0;
		//extraing vowels from the given string
		for (int i = 0;str[i]!='\0'; i++ ){
			//chekcing whether the character is vowel
			if (strchr(vowels, str[i])){
				v_str[j++] = str[i];				
			}
		}
		v_str[j] = '\0';
		puts(v_str);
		free(v_str);
	}	
	return 0;
}