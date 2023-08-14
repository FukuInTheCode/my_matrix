#include "../../includes/my.h"

void my_Matrix_SumRow(my_Matrix *A, my_Matrix *result) {
    my_Matrix_Create(A->m, 1, 1, result);
    unsigned int i;
    unsigned int j;
    double sum;
    for(i = 0; i<result->m; i++) {
        sum = 0;
        for(j = 0; j<A->n; j++) {
            sum += A->arr[i][j];
        }
        result->arr[i][0] = sum;
    }
}