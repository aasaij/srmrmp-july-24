//Program to find longest common substring
#include <stdio.h>
#include <string.h>
int lcs(char s1[], char s2[]){
	int len1 = strlen(s1), len2 = strlen(s2);
	int dp[len1+1][len2+1];
	for (int i = 0; i<=len1; i++)
		for (int j = 0; j<=len2; j++)
			dp[i][j] = 0;
	for (int i = 1; i<=len1; i++)
		for (int j = 1; j<=len2; j++){
			if (s1[i-1]==s2[j-1])
				dp[i][j] = dp[i-1][j-1] +1;
		}
	int highest = 0;
	for (int i = 0; i<=len1; i++)
		for (int j = 0; j<=len2; j++)
			if (dp[i][j]>highest) highest = dp[i][j];
	return highest;	
}

int main(){
	char str1[100], str2[100];
	scanf("%s %s", str1, str2);
	printf("%d", lcs(str1, str2));
	return 0;
}



https://razorhire.ai
rEFERAL cODE : RH4144VA
Linked-in : Aasai J



