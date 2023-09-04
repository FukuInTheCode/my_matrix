#include "../../includes/my.h"

void my_matrix_powerint(my_matrix_t *A, uint32_t const n, my_matrix_t *result)
{
    if (A->m != A->n) return;
    if (n == 0) {
        my_matrix_identity(1, result);
        return;
    } else if (n == 1) {
        my_matrix_copy(A, result);
        return;
    }

    MAT_DECLA(copy);
    my_matrix_copy(A, &copy);
    for (uint32_t i = 2; i <= n; i++) {
        my_matrix_product(result, 2, A, &copy);
        my_matrix_copy(result, &copy);
    }
    MAT_FREE(copy);
}

void my_matrix_powerint_2(my_matrix_t *A, const unsigned int n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_powerint(&cpy, n, A);
    MAT_FREE(cpy);
}
