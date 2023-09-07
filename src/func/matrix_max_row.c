#include "../../includes/my.h"

double my_matrix_maxrow(my_matrix_t *A, uint32_t const m)
{
    if (m >= A->m) {
        fprintf(stderr, "Row index too high!\n");
        exit(1);
    }
    double max = A->arr[m][0];
    for (uint32_t i = 0; i < A->n; i++) {
        if (max < A->arr[m][i])
            max = A->arr[m][i];
    }
    return max;
}
