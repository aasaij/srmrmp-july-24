#include <stdio.h>
#include<string.h>
int main(){
	char names[6][20] = {"Balaji", "Naveen", "Niliks", "Sivaraj", "Praveen", "Prasanna"};
	for (int r = 0; r < 6; r++){
		//checking whether the name ends with 'n'
		if (names[r][strlen(names[r])-1]=='n')
			puts(names[r]);
	}
	return 0;
}