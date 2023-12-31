#include "../../includes/my.h"

void my_matrix_inverse(my_matrix_t *A, my_matrix_t *result)
{
    if (A->m != A->n) {
        fprintf(stderr, "Matrix is not a square matrix!");
        exit(1);
    }
    double det = my_matrix_det(A);
    if (det == 0) {
        printf("A is not inversible!\n");
        my_matrix_create(A->m, A->n, 1, result);
        return;
    }

    MAT_DECLA(adjoint);
    my_matrix_adjugate(A, &adjoint);

    my_matrix_multiplybyscalar(&adjoint, 1 / det, result);

    MAT_FREE(adjoint);
}

void my_matrix_inverse_2(my_matrix_t *A)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_inverse(&cpy, A);
    MAT_FREE(cpy);
}
