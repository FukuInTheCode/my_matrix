#include "../../includes/my.h"


void my_matrix_transpose(my_matrix_t *A, my_matrix_t *T)
{
    unsigned int i, j;

    my_matrix_create(A->n, A->m, 1, T);
    for (i = 0; i < T->m; i++) {
        for (j = 0; j < T->n; j++) {
            T->arr[i][j] = A->arr[j][i];
        }
    }
}

void my_matrix_adjugate(my_matrix_t *A, my_matrix_t *result)
{
    unsigned int i;
    unsigned int j;

    if (A->m != A->n) {
        fprintf(stderr, "Matrix is not a square matrix!");
        exit(1);
    } else if (A->m == 1)
        return my_matrix_identity(1, result);

    my_matrix_create(A->m, A->n, 1, result);
    for (i = 0; i < result->m; i++) {
        for (j = 0; j < result->n; j++){
            my_matrix_t sub = {.m = 0, .n = 0};
            my_matrix_getsubmatrix(A, i, j, &sub);
            double cofactor = my_power(-1, i+j) * my_matrix_det(&sub);
            my_matrix_set(result, i, j, cofactor);
            my_matrix_free(1, &sub);
        }
    }
}
