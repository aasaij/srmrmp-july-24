#include <stdio.h>
int calc(int x, int y, char sign){
	switch(sign){
		case '+': return x + y;
		case '-' : return x- y;
		case 'x': case '*': case 'X' : return x * y;
		case '/' : return x / y;
		case '%' : return x % y;		
		default: return 0;
	}
}
int main(){
	int x,y;
	char sign;
	scanf("%d %c %d", &x, &sign, &y);
	printf("%d %c %d = %d\n", x, sign, y , calc(x,y,sign));
	return 0;
}