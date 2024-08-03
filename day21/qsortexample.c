//Program to demonstrate qsort() 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void* x, const void* y){
	return strcmp((char*)y, (char*)x); //String comparator
//	return *(int*)y - *(int*)x; //integer comparator
}
void printNames(char list[][30], int size){
	for (int i = 0; i<size; i++)
		puts(list[i]);
}
int main(){
	char names[][30] = {"Prakash", "Sandiya","Swarna","Sivaraj", "Niliks", "Keerthana", "Amritha", "Mercy", "Namagal"};
	int size = sizeof(names)/sizeof(names[0]);
	qsort(names,size, sizeof(names[0]),compare);
	printNames(names, size);
	return 0;
}