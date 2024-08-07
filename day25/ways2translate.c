//Ways to Translate
#include <stdio.h>
#include <string.h>
int translate(char* A){
	if(!A || A[0]=='0') return 0;
	int n=strlen(A);
	if(n==1) return 1;
	int DP [n+1];
	DP [0] = DP [1] = 1;
	for (int i = 2; i <= n; i++)
	{
		DP [i] = 0;
		if (A[i-1] > '0') DP [i] = DP [i-1];
		if (A[i-2] == '1' || (A[i-2] == '2' && A[i-1] < '7')) 
			DP [i] += DP [i-2];
	}
	return DP [n];
}

int main(){
	printf("%d", translate(NULL));
	return 0;
}
//Attendance : https://bit.ly/CV-050824

