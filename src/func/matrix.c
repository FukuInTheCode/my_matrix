#include <stdio.h>
#include "../../includes/my.h"


void my_Matrix_Print(my_Matrix* A) {
    unsigned int i, j;
    for(i=0; i<A->m; i++) {
        for(j=0;j<A->n;j++) {
            printf("%d ", A->arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int* my_Matrix_GetRow(my_Matrix* A, unsigned int i) {
    return A->arr[i];
}

void my_Matrix_GetColumn(my_Matrix* A, unsigned int n, int result[]) {
    unsigned int i;
    for(i = 0; i<A->m; i++) {
        result[i] = A->arr[i][n];
    }
}