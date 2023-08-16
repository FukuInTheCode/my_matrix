#include "../../includes/my.h"

double my_matrix_det(my_matrix_t *A)
{
    double det = 0;
    unsigned int i;

    if (A->m != A->n) {
        fprintf(stderr, "Matrix is not square matrix!");
        exit(1);
    } else if (A->m == 1) return A->arr[0][0];

    for (i = 0; i < A->n; i++){
        double sign = my_power(-1.0, i);

        my_matrix_t submatrix = {.m = 0, .n = 0};
        my_matrix_getsubmatrix(A, 0, i, &submatrix);
        det += sign * A->arr[0][i] * my_matrix_det(&submatrix);
        my_matrix_free(1, &submatrix);
    }
    return det;
}
