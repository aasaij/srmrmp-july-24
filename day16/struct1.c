#include <stdio.h>
#include<string.h>
struct employee{
    int id; //4
    int age; // 4
    char name[10]; // 10
    double salary; // 8
};
int main(){
    struct employee emp = {101,20,"Deepan", 500000};
    // emp.id = 101;
    // strcpy(emp.name, "Deepan");
    // emp.salary = 500000;
    printf("%lu", sizeof(struct employee));
    return 0;
}