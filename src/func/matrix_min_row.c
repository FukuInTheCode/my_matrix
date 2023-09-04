#include "../../includes/my.h"

double my_matrix_minrow(my_matrix_t *A, uint32_t const m)
{
    if (m >= A->m) {
        fprintf(stderr, "Row index too high!\n");
        exit(1);
    }
    double min = A->arr[0][m];
    for (uint32_t i = 0; i < A->n; i++) {
        if (min > A->arr[m][i])
            min = A->arr[m][i];
    }
    return min;
}
