#include "../../includes/my.h"

static void my_print(my_matrix_t *A)
{
    if (A->m == 0 || A->n == 0) return;
    char *t = A->name;
    int len = 0;
    while (*t != '\0') {
        t++;
        len++;
    }
    printf("%*s%c%*s%c\n", 3 + len, "", 218, 10 * A->n + 1, "", 191);
    for (size_t i = 0; i < A->m; i++) {
        if (i == (A->m / 2 - (A->m + 1) % 2))
            printf("%s = %c ", A->name, 179);
        else
            printf("%*s%c ", 3 + len, "", 179);
        for (size_t j = 0; j < A->n;j++)
            printf("%*s%f ", A->arr[i][j] >= 0 ? 1 : 0, "", A->arr[i][j]);
        printf("%c\n", 179);
    }
    printf("%*s%c%*s%c\n", 3 + len, "", 192, 10 * A->n + 1, "", 217);
}

void my_matrix_print(const unsigned int count, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, count);
    for (i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        my_print(A);
    }
    va_end(args);
}

void my_matrix_print_array(my_matrix_t **arr, uint8_t size)
{
    for (uint8_t i = 0; i < size; i++) {
        my_print(&(*arr)[i]);
    }
}
