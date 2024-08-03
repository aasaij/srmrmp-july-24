//Coin change problem - greedy approach
#include <stdio.h>
#include <stdlib.h>
int compare(const void* x, const void* y){
	return *(int*)y - *(int*)x;
}
int main(){
	int n, n_amt;
	scanf("%d %d", &n, &n_amt);
	int denom[n], amounts[n_amt];
	for (int i = 0; i<n; i++)
		scanf("%d", &denom[i]);
	for (int i = 0; i<n_amt; i++)		
		scanf("%d", &amounts[i]);
	qsort(denom,n, sizeof(int), compare);
	for(int i = 0; i<n_amt; i++){
		if(amounts[i]>=denom[n-1]){
			int counter = 0;
			int amt = amounts[i];
			for (int j = 0; j<n; j++){
				counter += amt / denom[j];
				amt %= denom[j];
			}
			printf("Amount : %d coins : %d\n", amounts[i],counter);
		}
		else
			printf("-1");
	}
	return 0;
}