#include "../../includes/my.h"

double my_matrix_det(my_matrix_t *A)
{
    double det = 0;

    if (A->m != A->n) {
        fprintf(stderr, "Matrix is not square matrix!");
        exit(1);
    } else if (A->m == 1) return A->arr[0][0];

    for (uint32_t i = 0; i < A->n; i++){
        double sign = my_power(-1.0, i);

        MAT_DECLA(submatrix);
        my_matrix_getsubmatrix(A, 0, i, &submatrix);
        det += sign * A->arr[0][i] * my_matrix_det(&submatrix);
        MAT_FREE(submatrix);
    }
    return det;
}
