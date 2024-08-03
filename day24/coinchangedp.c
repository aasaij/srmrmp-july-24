//Coin change problem using Dynamic Programming
#include <stdio.h>
#include <limits.h>
//implementing memoization for coin change problem
int min(int x,int y){
	return x < y ? x:y; 
}
int coinChange(int coins[], int ncoins, int amt){
	int dp[amt+1];
	dp[0] = 0;
	for (int i = 1; i<=amt; i++)
		dp[i] = INT_MAX;
	for (int i =1; i<=amt; i++){
		for (int j = 0; j<ncoins; j++){
			if ( i >= coins[j] && dp[i-coins[j]] != INT_MAX){
				dp[i] = min(dp[i], 1+dp[i-coins[j]]);
			}  
		}
	}
	return dp[amt]!=INT_MAX?dp[amt]:-1;
}

//Driver program
int main(){
	int ncoins;
	int amount;
	scanf("%d", &ncoins);
	int coins[ncoins];
	for (int i = 0; i<ncoins; i++)
		scanf("%d", &coins[i]);
	scanf("%d", &amount);
	printf("%d", coinChange(coins, ncoins, amount));
	
	return 0;
}