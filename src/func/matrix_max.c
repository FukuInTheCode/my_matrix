#include "../../includes/my.h"

double my_matrix_max(my_matrix_t *A)
{
    double max = A->arr[0][0];

    for (uint32_t i = 0; i < A->m; i++) {
        for (uint32_t j = 0; j < A->n; j++)
            max = max < A->arr[i][j] ? A->arr[i][j] : max;
    }
    return max;
}
