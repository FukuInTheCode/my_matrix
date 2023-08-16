#include "../../includes/my.h"

double my_matrix_mincol(my_matrix_t *A, const unsigned int n)
{
    unsigned int i;
    if (n >= A->n) {
        fprintf(stderr, "Column index too high!\n");
        exit(1);
    }
    double min = A->arr[0][n];

    for (i = 0; i < A->m; i++) {
        if (min > A->arr[i][n]) min = A->arr[i][n];
    }
    return min;
}
