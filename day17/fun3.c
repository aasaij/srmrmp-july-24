#include <stdio.h>
int add(int x, int y){
    return x + y;
}
int main(){
  int a,b;
  a = 10, b = 20;
    printf("%d", add(a,b));
    a = 200, b = 500;
    printf("\n%d", add(a,b));
    return 0;
}