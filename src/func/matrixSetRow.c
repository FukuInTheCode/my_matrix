#include "../../includes/my.h"

void my_matrix_setrow(my_matrix *A, const unsigned int m, const double x)
{
    unsigned int i;

    if (m >= A->m) return;
    for (i = 0; i < A->n; i++)
        A->arr[m][i] = x;
}
