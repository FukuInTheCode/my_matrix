#include "../../includes/my.h"

static void set_randfloat(my_matrix *A, double minN, double maxN)
{
    unsigned int i
    unsigned int j;

    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            my_matrix_set(A, j, i, my_randFloat(minN, maxN));
    }
}

void my_matrix_randfloat(double minN, double maxN,\
    const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix *A = va_arg(args, my_matrix *);
        set_randfloat(A, minN, maxN);
    }
    va_end(args);
}

static void set_randint(my_matrix *A, const int minN, const int maxN)
{
    unsigned int i
    unsigned int j;
    for (i = 0; i < A->m; i++) {
        for (j = 0; j < A->n; j++)
            my_matrix_set(A, j, i, my_randInt(minN, maxN));
    }
}

void my_matrix_randint(const int minN, const int maxN, const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix *A = va_arg(args, my_matrix *);
        set_randint(A, minN, maxN);
    }
    va_end(args);
}
