#include "../../includes/my.h"

static double setone(double x)
{
    if (x == 0) return 1;
    return x / x;
}

void my_matrix_one(my_matrix_t *A, my_matrix_t *result)
{
    my_matrix_applyfunc(A, setone, result);
}

void my_matrix_one_2(my_matrix_t *A)
{
    my_matrix_applyfunc_2(A, setone);
}
