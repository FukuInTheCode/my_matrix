#include "../../includes/my.h"

void my_Matrix_Inverse(my_matrix *A, my_matrix *result) {
    if(A->m != A->n) {
        fprintf(stderr, "Matrix is not a square matrix!");
        exit(1);
    }
    double det = my_Matrix_Det(A);
    if(det == 0) {
        printf("A is not inversible!\n");
        my_matrix_create(A->m, A->n, 1, result);
        return;
    }

    my_matrix Adjoint = {.m=0, .n=0};

    my_Matrix_Adjugate(A, &Adjoint);

    my_Matrix_MultiplyByScalar(&Adjoint, 1/det, result);

    my_Matrix_Free(1, &Adjoint);
}