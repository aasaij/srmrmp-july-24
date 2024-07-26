#include <stdio.h>
#include <ctype.h>
#include <string.h>
//Program to count number of consonants in the given string
int main(){
	char str[100], vowels[] = "aeiouAEIOU";	
	int counter = 0;
	scanf("%s",str);
	for (int index = 0; str[index];index++){
		//checking whether the char is consonant or not
//		if (isalpha(str[index]) && !strchr(vowels, str[index]))
		//checking whether the char is vowel or not
		if (strchr(vowels, str[index]))
			counter++; //if it is consonant increasing the counter
	}
//	printf("Number of consonants : %d", counter);
	printf("Number of vowels : %d\n", counter);
	return 0;
}
/*
<ctype.h> --> functions
int isalpha(<char>) ==> return non-zero if it is alpha otherwise zero
int isupper(<char>)
int islower(<char>)
int isdigit(<char>)
int isspace(<char>)
int ispunct(<char>)
int isprint(<char>)
int isalnum(<char>)
int toupper(<char>)
int tolower(<char>)

*/

<string.h>
int strlen(<string>) 
char* strcpy(<string1>, <string2>); // string2 = string1
char str1[100], str2[100];
strcpy(str1,"Testing") ; // str1 = "Testing"
strcpy(str2, str1); // str2 = str1;
int strcmp(<str1>, <str2>);
	printf("%d", strcmp("Aasai", "Aasai")); // < 0
	
		= 0 ==> Both strings are equal
		> 0 ==> first string is greater than the second one
		< 0 ==> second string is greater than the first one
char *strcat(<str1>, <str2>); // str1 = str1 + str2
char str1[100] = "Siva";;
char str2[100]="raj";
strcat(str1, str2);
char*strchr(<str>, <char>);
char *strstr(<str>, <search_str>);

Attendance Link : https://bit.ly/PA-250724
Trainer : Tambi
Session : FN





