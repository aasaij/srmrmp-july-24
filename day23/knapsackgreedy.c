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
	product products[] = {{25,18}, {24,15}, {15,10}};
	int size = sizeof(products) / sizeof(product), ksack_size, index;
	double profits = 0;
	scanf("%d", &ksack_size);
	for (int i = 0; i<size; i++)
		products[i].ratio = (float)products[i].profit/products[i].weight;
	qsort(products, size, sizeof(product), compare)	;
	while (index < size && ksack_size != 0){
		if (ksack_size>=products[index].weight){
			profits += products[index].profit;
			ksack_size -= products[index].weight;
		}else{
			profits += products[index].ratio * ksack_size;
			ksack_size = 0;
		}
		index++;
	}
	printf("Maximum Profit : %.2f\n", profits);
	return 0;
}
Attendance : https://bit.ly/CC-020824
