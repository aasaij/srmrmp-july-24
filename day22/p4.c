#include <stdio.h>
void before_main() __attribute__((constructor));
void after_main() __attribute__((destructor));

void before_main() {
    printf("This statement executes before main!\n");
}
void after_main(){
	printf("Thank you for being very silent!");
}

int main() {
    printf("This is the main function.\n");
    return 0;
}