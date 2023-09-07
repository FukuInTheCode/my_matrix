#include "../../includes/my.h"

void my_matrix_transform(my_matrix_t *A, uint32_t m,\
                            uint32_t n, my_matrix_t *result)
{
    if (m * n != A->m * A->n) return;
    my_matrix_create(m, n, 1, result);
    uint32_t i2 = 0;
    uint32_t j2 = 0;
    for (uint32_t i = 0; i < m; ++i) {
        for (uint32_t j = 0; j < n; ++j) {
            my_matrix_set(result, i, j, A->arr[i2][j2]);
            j2++;
            i2 += (j2 == A->n);
            j2 *= (j2 != A->n);
        }
    }
}

void my_matrix_transform_2(my_matrix_t *A, uint32_t m, uint32_t n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_transform(&cpy, m, n, A);
    MAT_FREE(cpy);
}
