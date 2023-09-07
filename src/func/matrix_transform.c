#include "../../includes/my.h"

void my_matrix_transform(my_matrix_t *A, uint32_t m,\
                            uint32_t n, my_matrix_t *result)
{
    if (m * n != A->m * A->n) return;
    my_matrix_create(m, n, 1, result);
    for (uint32_t i = 0; i < m; ++i) {
        for (uint32_t j = 0; j < n; ++j)
            my_matrix_set(result, i, j, A->arr[(i + j) / A->m][(i + j) % A->m]);
    }
}
