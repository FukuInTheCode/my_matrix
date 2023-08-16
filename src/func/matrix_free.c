#include "../../includes/my.h"

static void my_free(my_matrix *A)
{
    unsigned int i;
    for (i = 0; i < A->m; i++) {
        free(A->arr[i]);
    }
    free(A->arr);
}

static int free_is_valid(my_matrix *A)
{
    return (A->m == 0 || A->n == 0 || A->arr == NULL) ? 84 : 0;
}

void my_matrix_free(const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix *A = va_arg(args, my_matrix *);
        if (free_is_valid(A) == 84) continue;
        my_free(A);
    }
    va_end(args);
}
