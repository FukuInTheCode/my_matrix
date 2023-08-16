#include "../../includes/my.h"

double my_matrix_sum(my_matrix *A)
{
    unsigned int i;
    unsigned int j;
    double res = 0;

    for (i = 0; i < A->m; i++) {
        for(j = 0; j < A->n; j++)
            res += A->arr[i][j];
    }
    return res;
}
