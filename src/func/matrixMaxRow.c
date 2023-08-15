#include "../../includes/my.h"

double my_Matrix_MaxRow(my_matrix *A, const unsigned int m) {
    if(m >= A->m) {
        fprintf(stderr, "Row index too high!\n");
        exit(1);
    }
    unsigned int i;
    double max = A->arr[0][m];
    for(i=0; i<A->n; i++) {
        if(max < A->arr[m][i]) max = A->arr[m][i];
    }
    return max;
}