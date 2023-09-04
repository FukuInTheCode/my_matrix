#include "../../includes/my.h"

my_bool_t my_matrix_equals(my_matrix_t *A, my_matrix_t *B)
{
    unsigned int i;

    if (A->m != B->m || A->n != B->n)
        return FALSE;

    for (i = 0; i < A->m * A->n; i++) {
        if (A->arr[i / A->n][i % A->n] != B->arr[i / A->n][i % A->n])
            return my_false;
    }
    return my_true;
}
