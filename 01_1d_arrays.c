/*
    File: 01_arrays.c
    Author: Jason Pandian
    Created on: 11-02-2024
    Modified on: 11-02-2024
    Description: This program demonstrates basic array operations in C.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *dArray = (int*) malloc(size * sizeof(int)); 

    if (dArray == NULL) {
        printf("Memory Allocation failed \n");
        return 1;
    }

    printf("Size of the dynamically allocated array: %lu bytes\n", size * sizeof(int));

    for (int i = 0; i < size; ++i) {
        scanf("%d", &dArray[i]);
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", dArray[i]);
    }

    printf("\n");

    printf("Size of the dynamically allocated array: %d bytes\n", dArray);


    free(dArray);

    return 0;
}