#include "../../includes/my.h"

void my_Matrix_MultiplyByScalar(my_matrix* A, double scalar, my_matrix* result) {
    unsigned int i, j;
    my_matrix_copy(A, result);
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            result->arr[i][j] *= scalar;
        }
    }
}

void my_Matrix_AddScalar(my_matrix* A, double scalar, my_matrix* result) {
    unsigned int i, j;
    my_matrix_copy(A, result);
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            result->arr[i][j] += scalar;
        }
    }
}