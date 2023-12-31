#include "../../includes/my.h"

static inline __attribute__((always_inline)) void padding(my_matrix_t *A, \
                    uint32_t *len, int *dgts)
{
    char *t = A->name;
    if (t != NULL){
        *len = 0;
        while (*t != '\0' && t != NULL) {
            t++;
            (*len)++;
        }
    } else
        *len = 6;
    int tmp_max = (int)my_abs(my_matrix_max(A)) == 0 ? 1 :\
                                 (int)my_abs(my_matrix_max(A));
    int tmp_min = (int)my_abs(my_matrix_min(A)) == 0 ? 1 :\
                                    (int)my_abs(my_matrix_min(A));
    tmp_max = (int)log10(tmp_max);
    tmp_min = (int)log10(tmp_min);
    if (tmp_max > tmp_min)
        *dgts = tmp_max;
    else
        *dgts = tmp_min;
}

static void my_print(my_matrix_t *A)
{
    if (A->m == 0 || A->n == 0) return;

    uint32_t len;
    int dgts;
    padding(A, &len, &dgts);
    printf("%*s%c%*s %c\n", 3 + len, "", 218, (10 + dgts) * A->n + 1, "", 191);
    for (uint32_t i = 0; i < A->m; i++) {
        if (i == (A->m / 2 - (A->m + 1) % 2))
            printf("%s = %c ", A->name, 179);
        else
            printf("%*s%c ", 3 + len, "", 179);
        for (uint32_t j = 0; j < A->n; j++) {
            int pad = (A->arr[i][j] < 0 ? 0 : 1) + dgts;
            pad -= my_abs(A->arr[i][j]) >= 1 ? (int)(log10(my_abs(A->arr[i][j])) + 1e-15): 0;
            printf("%*s%f ", pad, "", A->arr[i][j]);
        }
        printf(" %c\n", 179);
    }
    printf("%*s%c%*s %c\n", 3 + len, "", 192, (10 + dgts) * A->n + 1, "", 217);
}

void my_matrix_print(uint32_t const count, ...)
{
    va_list args;
    va_start(args, count);
    for (uint32_t i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        my_print(A);
    }
    va_end(args);
}

void my_matrix_print_array(my_matrix_t **arr, uint32_t size)
{
    for (uint32_t i = 0; i < size; i++)
        my_print(&(*arr)[i]);
}
