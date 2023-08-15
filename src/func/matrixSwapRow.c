#include "../../includes./my.h"

void my_Matrix_SwapRow(my_matrix *A, const unsigned int a, const unsigned int b, my_matrix *result) {
    if(a >= A->m || b >= A->m) return;
    my_matrix_copy(A, result);
    unsigned int i;
    for(i=0; i<result->n; i++) {
        SWAP(result->arr[a][i], result->arr[b][i])
    }
}