#include <stdio.h>
#include <string.h>
typedef struct student {
	int id;
	char name[20];
}student;
void changeName(student *s){
//	strcpy(s->name,"Mercy");
	strcpy((*s).name, "Mercy");
}

int main(){
	student s1= {101, "Junya"};
	changeName(&s1);
	printf("%s", s1.name);
	return 0;
}