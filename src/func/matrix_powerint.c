#include "../../includes/my.h"

void my_matrix_powerint(my_matrix_t *A, const unsigned int n, my_matrix_t *result)
{
    unsigned int i;

    if (A->m != A->n) return;
    if (n == 0) {
        my_matrix_identity(1, result);
        return;
    } else if (n == 1) {
        my_matrix_copy(A, result);
        return;
    }

    my_matrix_t copy = {.m = 0, .n = 0};
    my_matrix_copy(A, &copy);

    for (i = 2; i <= n; i++) {
        my_matrix_product(result, 2, A, &copy);
        my_matrix_copy(result, &copy);
    }
    my_matrix_free(1, &copy);
}

void my_matrix_powerint_2(my_matrix_t *A, const unsigned int n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_powerint(&cpy, n, A);
    MAT_FREE(cpy);
}
