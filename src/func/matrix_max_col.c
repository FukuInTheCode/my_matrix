#include "../../includes/my.h"

double my_matrix_maxcol(my_matrix *A, const unsigned int n)
{
    unsigned int i;

    if (n >= A->n) {
        fprintf(stderr, "Column index too high!\n");
        exit(1);
    }
    double max = A->arr[0][n];
    for (i = 0; i < A->m; i++) {
        if (max < A->arr[i][n]) max = A->arr[i][n];
    }
    return max;
}
