#include "../../includes/my.h"

void my_Matrix_SetRow(my_matrix *A, const unsigned int m, const double x) {
    if(m >= A->m) return;
    unsigned int i;
    for(i=0; i<A->n; i++) {
        A->arr[m][i] = x;
    }
}