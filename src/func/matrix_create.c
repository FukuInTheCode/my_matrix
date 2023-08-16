#include "../../includes/my.h"

static void create(my_matrix *A, unsigned int m, unsigned int n)
{
    unsigned int i;

    A->m = m;
    A->n = n;
    A->arr = malloc(m * sizeof(double *));
    if (A->arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    for (i = 0; i < m; i++) {
        A->arr[i] = calloc(n, sizeof(double));
        if (A->arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(1);
        }
    }
}

void my_matrix_create(unsigned int m, unsigned int n, \
    const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix *A = va_arg(args, my_matrix *);
        my_matrix_free(1, A);
        create(A, m, n);
    }
    va_end(args);
}
