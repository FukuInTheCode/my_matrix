#include "../../includes/my.h"

void my_matrix_meshgrid(my_matrix_t *x, my_matrix_t *y,\
                            my_matrix_t *xx, my_matrix_t *yy)
{
    if (x->m != 1 || y->m != 1) return;
    my_matrix_broadcasting(x, y->n, x->n, xx);
    my_matrix_transpose(y, yy);
    my_matrix_broadcasting_2(yy, y->n, x->n);
}

void my_matrix_meshgrid_2(my_matrix_t *x, my_matrix_t *y)
{
    MAT_DECLA(cpy1);
    MAT_DECLA(cpy2);
    my_matrix_copy(x, &cpy1);
    my_matrix_copy(y, &cpy2);
    my_matrix_meshgrid(&cpy1, &cpy2, x, y);
    MAT_FREE(cpy1);
    MAT_FREE(cpy2);
}
