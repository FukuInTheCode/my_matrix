#include "../../includes/my.h"

static void set_randfloat(my_matrix_t *A, double minN, double maxN)
{
    unsigned int i;
    unsigned int j;

    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            my_matrix_set(A, j, i, my_randfloat(minN, maxN));
    }
}

void my_matrix_randfloat(const double minN, const double maxN,\
    const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        set_randfloat(A, minN, maxN);
    }
    va_end(args);
}

static void set_randint(my_matrix_t *A, const int minN, const int maxN)
{
    unsigned int i;
    unsigned int j;
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            my_matrix_set(A, j, i, my_randint(minN, maxN));
    }
}

void my_matrix_randint(const int minN, const int maxN, \
    const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        set_randint(A, minN, maxN);
    }
    va_end(args);
}
