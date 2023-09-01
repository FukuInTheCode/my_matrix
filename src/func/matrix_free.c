#include "../../includes/my.h"

static void my_free(my_matrix_t *A)
{
    unsigned int i;
    for (i = 0; i < A->m; i++) {
        free(A->arr[i]);
    }
    free(A->arr);
    A->arr = NULL;
    A->m = 0;
    A->n = 0;
}

static int free_is_valid(my_matrix_t *A)
{
    return (A->m == 0 || A->n == 0 || A->arr == NULL) ? 84 : 0;
}

void my_matrix_free(const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        if (free_is_valid(A) == 84) continue;
        my_free(A);
    }
    va_end(args);
}

void my_matrix_free_array(my_matrix_t **arr, uint8_t size)
{
    for (uint8_t i = 0; i < size; i++) {
        my_matrix_t A = (*arr)[i];
        if (free_is_valid(&A) == 84) continue;
        my_free(&A);
    }
    free(*arr);
}
