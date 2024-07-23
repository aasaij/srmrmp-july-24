#include<stdio.h>

int main(){
	int n, len;
	scanf("%d", &n);
	len = n * 2 - 1;
	for (int r = 1;r<n; r++)
		printf("%*d%*s%d\n", r, r,len-(r*2),"",r);
	printf("%*d",n,n);
	return 0;
}
