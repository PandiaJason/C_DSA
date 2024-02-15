/* 
    File: 04__2d_multi.c
    Author: Jason Pandian
    Created on: 15-02-2024
    Modified on: 15-02-2024
    Description: This program demonstrates 2d array multipication operations in C.    
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

int main(void)
{
    int matrix1[SIZE][SIZE] = {
        {1,2,3},
        {3,2,1},
        {1,2,3}
        };

    int matrix2[SIZE][SIZE] = {
        {4,5,6},
        {6,5,4},
        {4,6,5}
        };
            
    int mul[SIZE][SIZE]= {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    
    int temp, add, mult;


    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            temp = 0;
            for (int k = 0; k < SIZE; ++k) {
                mult = matrix1[i][k] * matrix2[k][j];
                add = mult + temp;
                temp = add;

            /* printf("matrix1[%d][%d] * matrix2[%d][%d] = %3d  \n", i, k, k, j, (matrix1[i][k] * matrix2[k][j])); */


            }
            mul[i][j] = add;
            printf("%d ", mul[i][j]);
        }printf("\n");
    }

    return 0;
}
