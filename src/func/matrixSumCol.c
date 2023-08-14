#include "../../includes/my.h"

void my_Matrix_SumCol(my_Matrix *A, my_Matrix *result) {
    my_Matrix_Create(1, A->n, 1, result);
    unsigned int i;
    unsigned int j;
    double sum;
    for(i = 0; i<result->n; i++) {
        sum = 0;
        for(j = 0; j<A->m; j++) {
            sum += A->arr[j][i];
        }
        result->arr[0][i] = sum;
    }
}