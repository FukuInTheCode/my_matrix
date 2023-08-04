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
}