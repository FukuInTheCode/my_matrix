#include "../../includes/my.h"

double my_Matrix_MinRow(my_Matrix *A, const unsigned int m) {
    if(m >= A->m) {
        fprintf(stderr, "Row index too high!\n");
        exit(1);
    }
    unsigned int i;
    double min = A->arr[0][m];
    for(i=0; i<A->n; i++) {
        if(min > A->arr[m][i]) min = A->arr[m][i];
    }
    return min;
}