#include "../../includes/my.h"

void my_matrix_meshgrid(my_matrix_t *x, my_matrix_t *y,\
                            my_matrix_t *xx, my_matrix_t *yy)
{
    if (x->m != 1 || y->n != 1) return;
    my_matrix_broadcasting(x, y->m, x->n, xx);
    my_matrix_broadcasting(y, y->m, x->n, yy);
}
