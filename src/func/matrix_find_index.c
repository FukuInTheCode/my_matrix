#include "../../includes/my.h"

uint32_t my_matrix_find_col_index(my_matrix_t *A, uint32_t m,  double x)
{
    for (uint32_t i = 0; i < A->n; ++i) {
        if (A->arr[m][i] == x)
            return i;
    }
    return A->n;
}
