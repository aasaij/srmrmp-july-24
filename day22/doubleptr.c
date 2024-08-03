//Program to demonstrate double pointer
//Creating two dimensional array dynamically
#include <stdio.h>
#include <stdlib.h>
int main(){
    int **arr, row=5, col=5;
//    arr[row][col]
    arr = (int **)calloc(sizeof(int*), row);
    for (int i = 0; i<row; i++)
        arr[i] = (int*)calloc(sizeof(int), col);
  arr[0][0] = 100;
  arr[row-1][col-1] = 600;
    printf("%d %d", arr[0][0], arr[0][1]);
    return 0;
}