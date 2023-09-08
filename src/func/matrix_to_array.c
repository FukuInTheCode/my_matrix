#include "../../includes/my.h"

void my_matrix_to_array(my_matrix_t *A, double **arr)
{
    uint32_t k = 0;
    for (uint32_t i = 0; i < A->m; ++i) {
        for (uint32_t j = 0; j < A->m; ++j)
            arr[k++] = A->arr[i][j];
    }
}
