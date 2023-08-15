#include "../../includes/my.h"

void my_Matrix_SetCol(my_matrix *A, const unsigned int n, const double x) {
    if(n >= A->n) return;
    unsigned int i;
    for(i=0; i<A->m; i++) {
        A->arr[i][n] = x;
    }
}