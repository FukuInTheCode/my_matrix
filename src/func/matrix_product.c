#include "../../includes/my.h"


static my_bool_t product_is_valid(va_list args, uint32_t const count)
{
    my_matrix_t *A = va_arg(args, my_matrix_t *);
    uint32_t insideN = A->n;
    for (uint32_t i = 0; i < (count - 1); i++) {
        A = va_arg(args, my_matrix_t *);
        if (A->m != insideN) return FALSE;
        insideN = A->n;
    }
    return TRUE;
}

static void my_product(my_matrix_t *A, my_matrix_t *B, my_matrix_t *result)
{
    if (A->n != B->m) return;

    unsigned int i, j;

    my_matrix_create(A->m, B->n, 1, result);

    for (i = 0; i < result->m; i++) {
        double *row = my_matrix_getrow(A, i);
        for (j = 0; j < result->n; j++) {
            double column[B->m];
            my_matrix_getcolumn(B, j, column);
            my_matrix_set(result, j, i, my_dot_product(row, column, A->n));
        }
    }
}

void my_matrix_product(my_matrix_t* result, uint32_t const count, ...)
{
    va_list args;
    va_list args_copy;
    va_copy(args_copy, args);
    va_start(args_copy, count);
    if (product_is_valid(args_copy, count) == FALSE) {
        va_end(args_copy);
        return;
    }
    va_end(args_copy);
    va_start(args, count);
    my_matrix_t *A = va_arg(args, my_matrix_t *);
    MAT_DECLA(copy);
    my_matrix_copy(A, &copy);
    for (uint32_t i = 0; i < (count - 1); i++) {
        my_matrix_t *B = va_arg(args, my_matrix_t *);
        my_product(&copy, B, result);
        my_matrix_copy(result, &copy);
    }
    MAT_FREE(copy);
}
