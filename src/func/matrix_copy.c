#include "../../includes/my.h"

void my_matrix_copy(my_matrix* A, my_matrix* copy)
{
    unsigned int i, j;
    my_matrix_create(A->m, A->n, 1, copy);
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++) {
            my_matrix_set(copy, j, i, A->arr[i][j]);
        }
    }
}