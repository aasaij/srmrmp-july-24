#include <stdio.h>
#include <stdlib.h>
char *substring(char str[], int start, int num){
	char *slice;	
	int j = 0;
	slice = (char *)malloc(num+1);
	for (int i =start; str[i]!='\0' && i<start+num;i++)
		slice[j++] = str[i];
	slice[j] = '\0';
	return slice;
}
int main(){
	printf("%s", substring("Karunya", 4,2)); //Karun
	return 0;
}