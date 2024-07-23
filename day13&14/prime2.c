#include <stdio.h>
//Twin prime numbers
//5,     11,    17, 19,   23,   29, 31
int main(){
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("Neither prime nor composite");
    else if (n > 3 &&(n % 2 == 0 || n % 3 == 0))
      printf("Not prime");
    else{
        for(int i = 5; i*i<=n; i+=6){  
            if ( n % i == 0 || n % (i+2)==0){
                printf("Not prime");
                return 0;
            }
        }
        printf("Prime");
    }
    return 0;
}