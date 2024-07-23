//12345
// 1234
//  123
//   12
//    1
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int r = n; r>=1; r--){
		//printing spaces
//		for (int c = 1; c<=n-r; c++)
//			printf(" ");
		printf("%*s", n-r,"");
		for (int c =1; c<=r; c++)
			printf("%c",64+c );
		printf("\n");
	}
	return 0;
}




