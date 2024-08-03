#include <stdio.h>
#include <stdlib.h>
typedef struct Student {
	int rollno;
	char name[30];
	float cgpa;
}student;
int compare (const void* s1, const void* s2){
	return (*(student*)s1).cgpa - (*(student*)s2).cgpa;
}
void printArray(student s[], int size){
	for (int i = 0; i<size; i++){
		printf("%d %s %.2f\n", s[i].rollno,s[i].name, s[i].cgpa );
	}
}
int main(){
	student s[3] = {{1, "XXX", 7},{2, "BBB", 5}, {3, "CCC", 9}};
	qsort(s,3,sizeof(student), compare);
	printArray(s, 3);
	return 0;
}
