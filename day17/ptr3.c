#include <stdio.h>

int main(){
	char name[] = "Amirtha";
	char *ptr = &name[0];
//	ptr++;
//	ptr+=4;
//	puts(ptr);	
//	printf("%c", ptr[0]);
//	printf("%c", ptr[-2]);
//	for (;*ptr;ptr++)
//		printf("%c", *ptr);
	*ptr = 'B';
	while (*ptr){
		printf("%c", *ptr++);
	}	
	return 0;
}