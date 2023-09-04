#include "../../includes/my.h"

void my_matrix_copy(my_matrix_t* A, my_matrix_t* copy)
{
    my_matrix_create(A->m, A->n, 1, copy);
    for (uint32_t i = 0; i < A->m; i++) {
        for (uint32_t j = 0; j < A->n; j++) {
            my_matrix_set(copy, j, i, A->arr[i][j]);
        }
    }
}
