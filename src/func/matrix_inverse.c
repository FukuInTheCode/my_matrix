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

    my_matrix_t Adjoint = {.m = 0, .n = 0};

    my_matrix_adjugate(A, &Adjoint);

    my_matrix_multiplybyscalar(&Adjoint, 1 / det, result);

    my_matrix_free(1, &Adjoint);
}
