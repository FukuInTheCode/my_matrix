#include <stdio.h>
#include "../../includes/my.h"


void my_Matrix_Print(my_Matrix* m) {
    int i, j;
    for(i=0; i<m->dimY; i++) {
        for(j=0;j<m->dimX;j++) {
            printf("%d ", m->arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int* my_Matrix_GetRow(my_Matrix* m, int i) {
    return m->arr[i];
}

void my_Matrix_GetColumn(my_Matrix* m, int n, int result[]) {
    int i;
    for(i = 0; i<m->dimY; i++) {
        result[i] = m->arr[i][n];
    }
}