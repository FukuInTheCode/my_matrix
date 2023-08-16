#include "../../includes/my.h"

double my_matrix_maxrow(my_matrix_t *A, const unsigned int m)
{
    unsigned int i;

    if (m >= A->m) {
        fprintf(stderr, "Row index too high!\n");
        exit(1);
    }
    double max = A->arr[0][m];
    for (i = 0; i < A->n; i++) {
        if (max < A->arr[m][i]) max = A->arr[m][i];
    }
    return max;
}
