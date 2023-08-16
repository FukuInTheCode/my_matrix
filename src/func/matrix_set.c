#include "../../includes/my.h"

void my_matrix_set(my_matrix *A, const unsigned int x, \
    const unsigned int y, const double n)
{
    if (x > A->n || y > A->m) return;

    A->arr[y][x] = n;
}
