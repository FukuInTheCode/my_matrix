#include "../../includes/my.h"

double my_matrix_sum(my_matrix_t *A)
{
    double res = 0;

    for (uint32_t i = 0; i < A->m; i++) {
        for(uint32_t j = 0; j < A->n; j++)
            res += A->arr[i][j];
    }
    return res;
}
