//Sorting strings
#include <stdio.h>
#include <string.h>
void swap(char *str1, char *str2){
	char temp[30];
	strcpy(temp,  str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
}
void printArray(char list[][30], int size){
	for (int i = 0; i<size; i++)
		printf("%s\n", list[i]);
}
//implementing bubble sort
void sort(char list[][30], int size){
	for (int i = 0; i<size; i++){
		for (int j = 0; j<size-i-1; j++){
			if ( strcmp(list[j], list[j+1])>0)
				swap(list[j], list[j+1]);
		}
	}
}
https://bit.ly/ZO-300724

int main(){
	char names[][30] = {"Gayathri", "Anika", "Junya", "Varsha", "Ashwin", "Niliks", "Sivaraj"};
	int size = sizeof(names)/sizeof(names[0]);
	sort(names, size);
	printArray(names, size);
	return 0;
}