#include "../../includes/my.h"

double my_matrix_mincol(my_matrix_t *A, uint32_t const n)
{
    if (n >= A->n) {
        fprintf(stderr, "Column index too high!\n");
        exit(1);
    }
    double min = A->arr[0][n];

    for (uint32_t i = 0; i < A->m; i++) {
        if (min > A->arr[i][n])
            min = A->arr[i][n];
    }
    return min;
}
