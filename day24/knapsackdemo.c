//Fractional Knapsack - Greedy method
#include <stdio.h>
#include <stdlib.h>
typedef struct product{
	int profit;
	int weight;
	double ratio;
}product;
int compare(const void* x, const void* y){
	return (*(product*)y).ratio - (*(product*)x).ratio;
}
int main(){
//	product products[] = {{10,2},{5,3},{15,3},{7,7},{6,1},{18,4},{3,1}};
product products[] = {{2,1},{28,4},{25,5},{18,3},{9,3}};
	int size = sizeof(products) / sizeof(product), ksack_size, index;
	double profits = 0;
	scanf("%d", &ksack_size);
	for (int i = 0; i<size; i++)
		products[i].ratio = (double)products[i].profit/(double)products[i].weight;
	qsort(products, size, sizeof(product), compare)	;
	while (index < size && ksack_size != 0){
		if (ksack_size>=products[index].weight){
			profits += products[index].profit;
			ksack_size -= products[index].weight;
		}else{
			profits += products[index].ratio * (double)ksack_size;
			ksack_size = 0;
		}
		index++;
	}
	printf("Maximum Profit : %.2lf\n", profits);
	return 0;
}
