//Program to implement binary search
#include <stdio.h>
int main(){
	int arr[] = {10,20,30,40,50,60,70}, lb,  ub;
	int size = sizeof(arr)/sizeof(arr[0]), key;
	scanf("%d", &key);
	lb = 0, ub = size-1;
	while(lb<=ub)
	{
		int middle = (lb + ub) / 2;
		if ( arr[middle]==key){
			printf("Found!");
			return 0;
		}
		else if ( arr[middle]<key)
			lb = middle + 1;
		else
			ub = middle - 1;
	}
	printf("Not found!");
	return 0;
}
Attendance : https://bit.ly/RA-290724