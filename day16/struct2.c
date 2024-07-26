#include <stdio.h>
#include<string.h>
struct employee{
    int id; //4
    int age; // 4
    char name[20]; // 10
    double salary; // 8
};
int main(){
	struct employee emp[40];
	for(int i=0; i<2; i++){
		scanf("%d %d %s %lf", &emp[i].id, &emp[i].age,emp[i].name,
			&emp[i].salary);
	}
	printf("*****************************************\n");
	printf("EmpId Age Employee Name        Salary    \n");
	printf("*****************************************\n");
	for(int i=0; i<2; i++){
		printf("%5d %3d %-20s %10.2lf\n", emp[i].id, emp[i].age,emp[i].name,
			emp[i].salary);
	}
	printf("*****************************************\n");
	
//    struct employee emp1 = {101,20, "Deepan", 500000};
//    struct employee emp2 = {102};
//    struct employee emp3 = {.name="Guna", .salary=1000000};
//    printf("%lu", sizeof(struct employee));
//    printf("%d %d %s %lf", emp1.id, emp1.age, emp1.name, emp1.salary);
    return 0;
}