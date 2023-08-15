#include "../../includes./my.h"

void my_Matrix_SwapCol(my_matrix *A, const unsigned int a, const unsigned int b, my_matrix *result) {
    if(a >= A->n || b >= A->n) return;
    my_matrix_copy(A, result);
    unsigned int i;
    for(i=0; i<result->m; i++) {
        SWAP(result->arr[i][a], result->arr[i][b])
    }
}