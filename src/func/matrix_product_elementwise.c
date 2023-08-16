#include "../../includes/my.h"

static int multiplication_is_valid(va_list args, const unsigned int count)
{
    unsigned int i;
    my_matrix *A = va_arg(args, my_matrix*);
    unsigned int baseM = A->m;
    unsigned int baseN = A->n;
    for (i = 0; i < count-1; i++) {
        A = va_arg(args, my_matrix *);
        if ((A->m != baseM && A->m != 1) || (A->n != baseN && A->n != 1))
            return 1;
    }
    return 0;
}

static void multiply(my_matrix *result, my_matrix *A)
{
    my_matrix tmp = {.m = 0, .n = 0};
    my_matrix_broadcasting(A, result->m, result->n, &tmp);
    unsigned int i, j;
    for (i = 0; i < result->m; i++) {
        for (j = 0; j < result->n; j++) {
            result->arr[i][j] *= tmp.arr[i][j];
        }
    }
    my_matrix_free(1, &tmp);
}

void my_matrix_product_elementwise(my_matrix *result, \
    const unsigned int count, ...)
{
    va_list args;
    va_list args_copy;
    va_copy(args_copy, args);
    va_start(args_copy, count);
    if (multiplication_is_valid(args_copy, count) == 1) {
        va_end(args_copy);
        return;
    }
    va_end(args_copy);
    va_start(args, count);
    my_matrix *A = va_arg(args, my_matrix*);
    my_matrix_copy(A, result);
    unsigned int i;
    for (i = 0; i < (count-1); i++) {
        A = va_arg(args, my_matrix*);
        multiply(result, A);
    }
    va_end(args);
}
