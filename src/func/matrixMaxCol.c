#include "../../includes/my.h"

double my_Matrix_MaxCol(my_matrix *A, const unsigned int n) {
    if(n >= A->n) {
        fprintf(stderr, "Column index too high!\n");
        exit(1);
    }
    unsigned int i;
    double max = A->arr[0][n];
    for(i=0; i<A->m; i++) {
        if(max < A->arr[i][n]) max = A->arr[i][n];
    }
    return max;
}