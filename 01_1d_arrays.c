/*
    File: 01__1d_arrays.c
    Author: Jason Pandian
    Created on: 11-02-2024
    Modified on: 11-02-2024
    Description: This program demonstrates dynamic 1d array operations in C.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    printf("Enter the size of the dynamic 1d array: ");
    scanf("%d", &size);

    int *dArray = (int*) malloc(size * sizeof(int));
    if (dArray == NULL) {
        printf("Memory Allcocation failed to initialized.\n");
        return 1;
    }

    printf("Display the size of the dynamic 1d array in %lu \n", size * sizeof(int));

    printf("Enter the elements in the dynamic 1d array: \n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &dArray[i]);
    }

    printf("Displaying the  dynamic 1d array by elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", dArray[i]);
    }

    printf("\n");

    return 0;    
}