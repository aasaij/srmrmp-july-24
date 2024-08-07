//Program to find Longest Increasing subsequence
#include <stdio.h>
#define max(x,y) x>y?x:y
int lis(int a[], int n){
	int dp[n], highest;
	//initializing all array elements as 1
	for (int i = 0; i<n; i++)
		dp[i] = 1;
	//Generating memoization table		
	for (int i = 1; i<n; i++){
		for (int j = 0; j<i;j++){
			if ( a[i]>a[j]){
				dp[i] = max(dp[i], 1+dp[j]);
			}
		}
	}
	//finding longest increasing sub-sequence
	highest = dp[0];
	for (int i = 1; i<n; i++){
		if ( dp[i]>highest)
			highest = dp[i];
	}
	return highest;
}
int main(){
	int arr[] = {10,22,9,33,21,50,41,60,80};
	int len = sizeof(arr)/ sizeof(arr[0]);
	printf("%d", lis(arr, len));	
	return 0;
}