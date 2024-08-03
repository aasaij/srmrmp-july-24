//Cloth cutting problem - Dynamic programming
#include <stdio.h>
#include <limits.h>
int max(int x, int y){
	return x > y ? x : y;
}
int clothCutting(int p[], int n, int cl){
	int dp[cl+1];
	dp[0] = 0;
	for (int i = 1; i<=cl; i++)
		dp[i]=INT_MIN;
	for (int i = 1; i<=cl;i++){
		for (int j = 1;j<=i && j<=n; j++){
			if (i<=j && dp[i-j] != INT_MIN){
				dp[i] = max(dp[i], p[j]+dp[i-j]);
			}
		}
	}
	return dp[cl]!=INT_MIN ? dp[cl]:-1;
}
int main(){
	int profits[] = {0,1,5,8,9,10,17,17,20,24,30};
	int n = sizeof(profits)/sizeof(profits[0]);
	int length;
	scanf("%d", &length);
	printf("%d", clothCutting(profits,n,length));
	return 0;
}

Quiz time : 3.00 to 3.30
Attendance Link : AA-030824


