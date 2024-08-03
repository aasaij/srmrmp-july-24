//Program to check whether both strings are Anagram or not
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int compareChar(const void *x, const void *y){
	return *(char*)x - *(char*)y;
}
char *upper(char str[]){
	int len = strlen(str);
	char *ustr = malloc(len+1);
	for (int i = 0; i<len; i++)
		ustr[i] = tolower(str[i]);
	ustr[len] = '\0';
	return ustr;
}
int main(){
	char str1[100], str2[100];
	int len1, len2;
	scanf("%s %s", str1, str2);
	len1 = strlen(str1);
	len2 =strlen(str2);
	if (len1== len2){
		qsort(str1, strlen(upper(str1)), sizeof(char), compareChar);
		qsort(str2, strlen(upper(str2)), sizeof(char), compareChar);
		printf("%s", strcmp(str1, str2)==0?"Anagram":"Not Anagram");
	}
	else
		printf("Not Anagram");
	return 0;
}