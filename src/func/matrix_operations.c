#include "../../includes/my.h"


void my_matrix_adjugate(my_matrix_t *A, my_matrix_t *result)
{
    if (A->m != A->n) {
        fprintf(stderr, "Matrix is not a square matrix!");
        exit(1);
    } else if (A->m == 1)
        return my_matrix_identity(1, result);

    my_matrix_create(A->m, A->n, 1, result);
    for (uint32_t i = 0; i < result->m; i++) {
        for (uint32_t j = 0; j < result->n; j++){
            MAT_DECLA(sub);
            my_matrix_getsubmatrix(A, i, j, &sub);
            double cofactor = my_power(-1, i+j) * my_matrix_det(&sub);
            my_matrix_set(result, j, i, cofactor);
            MAT_FREE(sub);
        }
    }
}
