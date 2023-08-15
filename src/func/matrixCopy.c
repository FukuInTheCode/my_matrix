#include "../../includes/my.h"

void my_matrix_copy(my_matrix* A, my_matrix* copy) {
    my_matrix_create(A->m, A->n, 1, copy);
    unsigned int i, j;
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            my_Matrix_Set(copy, j, i, A->arr[i][j]);
        }
    }
}

