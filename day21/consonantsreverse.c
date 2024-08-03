//Program to reverse consonants of string
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool isVowel(char ch){
	if (strchr("aeiouAEIOU", ch))
		return true;
	return false;
}
bool isConsonant(char ch){
	return isalpha(ch) && !isVowel(ch);	
}
int main(){
	char str[100];
	int len;
	scanf("%s", str);
	len = strlen(str);
	for (int i=0, j = len-1; i<j; i++, j--){
		if (isConsonant(str[i])&&isConsonant(str[j]))
			str[i] = str[i]+str[j] - (str[j]=str[i]); //swapping
		else if (isConsonant(str[i])) i--;
		else if (isConsonant(str[j])) j++;
	}
	puts(str);
	return 0;
}