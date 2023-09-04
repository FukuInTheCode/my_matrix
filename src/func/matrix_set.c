#include "../../includes/my.h"

void my_matrix_set(my_matrix_t *A, uint32_t const x,\
                        uint32_t const y, double const  n)
{
    if (x > A->n || y > A->m) return;

    A->arr[y][x] = n;
}
