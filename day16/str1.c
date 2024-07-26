#include <stdio.h>

int main(){
    char str[11];
    int len;
    // gets(str);
//    scanf("%9[^\n]s", str);
//	scanf("%11[0-9]s", str);
//	scanf("%11[^0-9]s", str);
	scanf("%s%n", str, &len);
	puts(str);
	printf("%d", len);

    return 0;
}
