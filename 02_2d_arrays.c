/*
    File: 02__2d_arrays.c
    Author: Jason Pandian
    Created on: 11-02-2024
    Modified on: 11-02-2024
    Description: This program demonstrates dynamic 2d array operations in C.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, cols;
    printf("Enter the number of rows and columns in the 2d dynamic array(row,column):\n");
    scanf("%d%d", &rows,&cols);

    printf("%d %d \n", rows,cols);

    int **dArray2D = (int**) malloc(rows * sizeof(int *));
    if (dArray2D == NULL) {
        printf("Memory Allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < rows; ++i) {
        dArray2D[i] = (int*) malloc(cols *sizeof(int));
        if (dArray2D[i] == NULL) {
            printf("Memory Allocation failed.\n");
            return 1;
        }
    }

    printf("Dispay the size of the dynamic 2d array in %lu \n", rows * cols * (sizeof(int)));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &dArray2D[i][j]);
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", dArray2D[i][j]);
        }printf("\n");

    }

    for (int i = rows - 1; i >= 0; --i) {
        free(dArray2D[i]);
    }
    free(dArray2D);

    return 0;
}