#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n == 1)
		printf("Neither prime nor composite");
	else{
		for(int i = 2; i<n; i++){  
			if ( n % i == 0 ){
				printf("Not prime");
				return 0;
			}
		}
		printf("Prime");
	}
	return 0;
}

//5 ==> 6 x 1-1
//29 = 6 x 5 - 1
//61 => 6 x 10 + 1
//25 => 6 x 4 + 1
//35 => 6 x 6 - 1