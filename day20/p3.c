//Sorting strings
#include <stdio.h>

int main(){
    char str[] = "Testing";
    char *str1 = "Testing";    
    str[0] = 'B';
    str1 = "Another Testing";
    puts(str);
    return 0;
}