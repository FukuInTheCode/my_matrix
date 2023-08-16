#include "../../includes/my.h"

void my_matrix_setcol(my_matrix_t *A, const unsigned int n, const double x)
{
    unsigned int i;

    if (n >= A->n) return;
    for (i = 0; i < A->m; i++)
        A->arr[i][n] = x;
}
