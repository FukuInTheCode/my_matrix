#include "../../includes/my.h"

void my_matrix_transpose(my_matrix_t *A, my_matrix_t *T)
{
    my_matrix_create(A->n, A->m, 1, T);
    for (uint32_t i = 0; i < T->m; i++) {
        for (uint32_t j = 0; j < T->n; j++) {
            T->arr[i][j] = A->arr[j][i];
        }
    }
}

void my_matrix_transpose_2(my_matrix_t *A)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_transpose(&cpy, A);
    MAT_FREE(cpy);
}
