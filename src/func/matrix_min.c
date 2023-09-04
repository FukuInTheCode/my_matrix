#include "../../includes/my.h"

double my_matrix_min(my_matrix_t *A)
{
    double min = A->arr[0][0];

    for (uint32_t i = 0; i < A->m; i++) {
        for (uint32_t j = 0; j < A->n; j++) {
            min = min > A->arr[i][j] ? A->arr[i][j] : min;
        }
    }
    return min;
}
