#include "../../includes/my.h"

void my_matrix_fill_from_array(my_matrix_t *A, double *arr, uint32_t arr_size)
{
    if (A->m == 0 || A->n == 0) return;
    for(uint32_t i = 0; i < arr_size; ++i) {
        if (i + 1 > A->m * A->n) break;
        my_matrix_set(A, i / A->n, i % A->n, arr[i]);
    }
}