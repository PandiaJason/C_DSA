/* 
    File: 03__2d_add.c
    Author: Jason Pandian
    Created on: 14-02-2024
    Modified on: 14-02-2024
    Description: This program demonstrates 2d array addition operations in C.    
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

int main(void)
{
    int matrix1[SIZE][SIZE] = {{1,0,0},{0,1,0},{0,0,1}};
    int matrix2[SIZE][SIZE] = {{1,0,0},{0,1,0},{0,0,1}};

    int sum[SIZE][SIZE];

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ",sum[i][j]);

        }printf("\n");
    }

    return 0;
}
