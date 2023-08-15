#include "../../includes/my.h"

double my_matrix_max(my_matrix *A)
{
    double max = A->arr[0][0];
    unsigned int i;
    unsigned int j;

    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            max = max < A->arr[i][j] ? A->arr[i][j] : max;
    }
    return max;
}
