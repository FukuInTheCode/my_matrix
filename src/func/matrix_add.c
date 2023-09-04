#include "../../includes/my.h"

static int add_is_valid(va_list args, const unsigned int count)
{
    my_matrix_t *A = va_arg(args, my_matrix_t *);
    unsigned int baseM = A->m;
    unsigned int baseN = A->n;
    unsigned int i;
    for (i = 0; i < count-1; i++) {
        A = va_arg(args, my_matrix_t *);
        if ((A->m != baseM && A->m != 1) || (A->n != baseN && A->n != 1))
            return 1;
        }
    return 0;
}
static void add(my_matrix_t *result, my_matrix_t *A)
{
    MAT_DECLA(tmp);
    my_matrix_broadcasting(A, result->m, result->n, &tmp);
    for (uint32_t i = 0; i < result->m; i++) {
        for (uint32_t j = 0; j < result->n; j++) {
            result->arr[i][j] += tmp.arr[i][j];
        }
    }
    MAT_FREE(tmp);
}

void my_matrix_add(my_matrix_t *result, uint32_t const count, ...)
{
    va_list args;
    va_list args_copy;
    va_copy(args_copy, args);
    va_start(args_copy, count);
    if (add_is_valid(args_copy, count) == 1) {
        va_end(args_copy);
        return;
    }
    va_end(args_copy);
    va_start(args, count);
    my_matrix_t *A = va_arg(args, my_matrix_t *);
    my_matrix_create(A->m, A->n, 1, result);
    my_matrix_copy(A, result);
    for (uint32_t i = 0; i < (count-1); i++) {
        A = va_arg(args, my_matrix_t *);
        add(result, A);
    }
    va_end(args);
}
