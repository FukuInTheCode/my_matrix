#include "../../includes/my.h"

void my_matrix_meshgrid(my_matrix_t *x, my_matrix_t *y,\
                            my_matrix_t *xx, my_matrix_t *yy)
{
    if (x->m != 1 || y->m != 1) return;
    my_matrix_broadcasting(x, y->n, x->n, xx);
    my_matrix_transpose(y, yy);
    my_matrix_broadcasting_2(yy, y->n, x->n);
}
