//Program to display substring of the given string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fact(int n){
	return n * (n+1) / 2;
}
char **generateSubstrings(char str[]){
	char **strings;
	int len = strlen(str);
	int r_size = fact(len);
	strings = malloc(sizeof(char*)*r_size);
	for (int i = 0; i<r_size; i++)
		strings[i] = (char*)malloc(len+1);
	for (int r = 0, k=0; r<len; r++){
		for (int c = 0; c<len-r; c++){
			sprintf(strings[k++], "%.*s",c+1,str+r);			
		}
	}
	return strings;
}

int main(){
	char str[100], **sstr, dir;
	int r_size, num_r, num_char_r, len;
	scanf("%s", str);
	len = strlen(str);
//	r_size = fact(len);
//	sstr = generateSubstrings(str);
	scanf("%d", &num_r);
	char firstCharString[num_r+1];
	for (int i = 1; i<=num_r; i++){
		scanf("%c %d\n", &dir, &num_char_r);
		if (dir =='l'|| dir=='L'){
			char temp[len];
			sprintf(temp, "%s%.*s",str+num_char_r,num_char_r, str);
			strcpy(str, temp);
		}
		else if (dir=='r' || dir=='R'){
			char temp[len];
			sprintf(temp, "%s%.*s",str+(len-num_char_r),len-num_char_r, str);
			strcpy(str, temp);		
		}
	}
	return 0;
}
//Attendance : https://bit.ly/CC-010824
//Test Link : https://tinyurl.com/yeyt6myt
