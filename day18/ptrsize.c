//Pointers size
#include <stdio.h>
struct student {
	int id;
	char name[30];
};

int main(){
	int *ptr;
	char *cptr;
	float *fptr;
	double *dptr;
	struct student *sptr;
	printf("%lu %lu %lu %lu %lu", sizeof(ptr), sizeof(cptr),
	 sizeof(fptr), sizeof(dptr), sizeof(sptr));
	 return 0;
}