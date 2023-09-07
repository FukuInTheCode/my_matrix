#include "../../includes/my.h"

void my_matrix_linspace(my_matrix_t *m, double start, double stop, uint32_t num)
{
    my_matrix_create(1, num, 1, m);
    double step = (double)num / (stop - start);
    for (uint32_t i = 0; i < num; ++i)
        my_matrix_set(m, 0, i, i * step + start);
}
