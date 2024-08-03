//Activity Selection problem --> greedy approach
#include <stdio.h>
#include <stdlib.h>
typedef struct Booking{
	int id;
	int start;
	int end;
}booking;
int endCompare(const void* x, const void* y){
	return (*(booking*)x).end - (*(booking*)y).end;
}
//printing the job IDs which can be selected
void selectBooking(booking b[], int n){
	printf("Job : 1 ");
	for (int i = 0, j= 1;i<n && j < n; j++){
		if (b[j].start >= b[i].end){
			printf("%d ", b[j].id);
			i = j;
		}
	}
}
int main(){
	booking slots[] = {{2,1,4}, {4,3,5},{1,0,6},{6,5,7}, {3,3,9},{5,5,9},{7,6,10},{8,8,11},{9,8,12},{11,2,14},{10,12,16}};
	int size = sizeof(slots)/sizeof(slots[0]);
	//Sorting the bookings by booking end time
	qsort(slots,size, sizeof(booking),endCompare);
	selectBooking(slots, size);
	return 0;
}