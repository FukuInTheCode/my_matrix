#define MATRIX_CHECK_ALLOC
#include "../../includes/my.h"

static void create(my_matrix_t *A, uint32_t m, uint32_t n)
{
    A->m = m;
    A->n = n;
    A->arr = malloc(m * sizeof(double *));
    check_alloc(A->arr);
    for (uint32_t i = 0; i < m; i++) {
        A->arr[i] = calloc(n, sizeof(double));
        check_alloc(A->arr[i]);
    }
}

void my_matrix_create(uint32_t m, uint32_t n, \
    uint32_t const count, ...)
{
    va_list args;
    va_start(args, count);
    for (uint32_t i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        my_matrix_free(1, A);
        create(A, m, n);
    }
    va_end(args);
}

void my_matrix_create_array(my_matrix_t **arr, char *common_name, \
                                const uint32_t count, ...)
{
    *arr = malloc(count * sizeof(my_matrix_t));
    if (*arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    va_list args;
    va_start(args, count);
    for (size_t i = 1; i <= count; i++) {
        my_matrix_t *A = &((*arr)[i - 1]);
        uint32_t m = va_arg(args, int);
        uint32_t n = va_arg(args, int);
        create(A, m, n);
        A->name = init_str(common_name, i);
    }
    va_end(args);
}
