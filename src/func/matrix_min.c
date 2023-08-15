#include "../../includes/my.h"

double my_matrix_min(my_matrix *A)
{
    unsigned int i;
    unsigned int j;
    double min = A->arr[0][0];

    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++) {
            min = min > A->arr[i][j] ? A->arr[i][j] : min;
        }
    }
    return min;
}
