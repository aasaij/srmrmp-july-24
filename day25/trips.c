//Program to optimize the trip for vocation
#include <stdio.h>
typedef struct trip{
	char place[30];
	int time;
	int candies;
}Trip;
int max(int x, int y){
	return x > y ? x : y;
}
int tripOptimize(Trip t[], int n, int n_days){
	int dp[n+1][n_days+1];
	//initializing all tabular elements as 0
	for (int r = 0; r<=n; r++){
		for (int c = 0; c<=n_days; c++)
			dp[r][c] = 0;
	}
	//forming tabular data
	for (int r = 1;r<=n; r++){
		for (int c = 1; c<=n_days; c++){
			if ( c >= t[r].time ){
				dp[r][c] = max(dp[r-1][c],t[r].candies + dp[r-1][c-t[r].time]);
			}
			else{
				dp[r][c] = dp[r-1][c];
			}
		}
	}
	return dp[n][n_days];
}
int main(){
	Trip trips[] = {{},{"London", 1, 7}, {"Newyark", 1, 6}, {"Paris", 2, 9}, 
		{"Berlin",4,9}, {"Hyderabad",1,8}};
	int n = sizeof(trips)/ sizeof(trips[0]);
	int days;
	scanf("%d", &days);
	printf("%d", tripOptimize(trips, n,days));
	return 0;
}