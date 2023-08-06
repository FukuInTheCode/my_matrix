#include "../../includes/my.h"

void __Print(my_Matrix *A) {
    //...
}

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
