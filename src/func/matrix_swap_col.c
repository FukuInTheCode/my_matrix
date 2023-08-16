#include "../../includes./my.h"

void my_matrix_swapcol(my_matrix_t *A, const unsigned int a, \
    const unsigned int b, my_matrix_t *result)
{
    if (a >= A->n || b >= A->n) return;

    unsigned int i;

    my_matrix_copy(A, result);
    for (i = 0; i < result->m; i++)
        swap(&(A->arr[i][a]), &(A->arr[i][b]));
}
