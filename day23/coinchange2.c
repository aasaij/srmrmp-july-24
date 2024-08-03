//Coin change problem - greedy approach
#include <stdio.h>
#include <stdlib.h>
int compare(const void* x, const void* y){
	return *(int*)y - *(int*)x;
}
int main(){
	int denom[] = {100,500,50,10,6,5,2};
//	int denom[] = {1, 9, 10};
	int n = sizeof(denom)/sizeof(denom[0]);
	int amount;	
	scanf("%d", &amount);
	qsort(denom,n, sizeof(int), compare);
	if(amount>=denom[n-1]){
		int counter = 0;		
		for (int j = 0; j<n && amount != 0; j++){
			if (amount < denom[i]) continue;
			counter += amount / denom[j];
			amount %= denom[j];
		}
		if (!amount) // amount is zero
			printf("coins : %d\n",counter);
		else
			printf("-1");
	}
	else
		printf("-1");
	return 0;
}