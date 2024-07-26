//Program to check whether the given string is polindrome or not
#include <stdio.h>
int main(){
	char str[100];
	int n;
	scanf("%s%n", str, &n);
	for(int left =0,right = n-1;left < right;left++, right--){
		if (str[left]!= str[right]){
			printf("Not polindrome!");
			return 0;
		}
	}
	printf("Polindrome");
	return 0;
}