#include "../../includes/my.h"

double my_Matrix_MinCol(my_Matrix *A, const unsigned int n) {
    if(n >= A->n) {
        fprintf(stderr, "Column index too high!\n");
        exit(1);
    }
    unsigned int i;
    double min = A->arr[0][n];
    for(i=0; i<A->m; i++) {
        if(min > A->arr[i][n]) min = A->arr[i][n];
    }
    return min;
}