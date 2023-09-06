#define MATRIX_CHECK_ALLOC
#define MATRIX_INIT_STR
#include "../../includes/my.h"

void my_matrix_copy(my_matrix_t *A, my_matrix_t *copy)
{
    my_matrix_create(A->m, A->n, 1, copy);
    for (uint32_t i = 0; i < A->m; i++) {
        for (uint32_t j = 0; j < A->n; j++) {
            my_matrix_set(copy, i, j, A->arr[i][j]);
        }
    }
}

void my_matrix_copy_array(my_matrix_t **arr, my_matrix_t **copy, uint32_t size, char *common_name)
{
    *copy = malloc(size * sizeof(my_matrix_t));
    check_alloc(*copy);
    for (uint32_t i = 0; i < size; ++i) {
        my_matrix_copy(&((*arr)[i]), &((*copy)[i]));
        (*copy)[i].name = init_str(common_name, i);
    }
}
