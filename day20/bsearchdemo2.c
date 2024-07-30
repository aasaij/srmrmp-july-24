//Program to find name in list of names using bsearch()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *x, const void *y){
	return strcmp((char*)x, (char*)y);
}
int main(){
	char names[][30] = { "Amritha", "Cavin","David Billa","Naveen", "Praveen"};
	char search[30];
	int size = sizeof(names)/sizeof(names[0]), *result;
	scanf("%s", search);
	result = bsearch(search,names,size,sizeof(names[0]),compare);
	printf("%s",  result?"Found":"Not Found");
	return 0;
}