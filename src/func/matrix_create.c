#include "../../includes/my.h"

static void create(my_matrix_t *A, unsigned int m, unsigned int n)
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
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        my_matrix_free(1, A);
        create(A, m, n);
    }
    va_end(args);
}

// static inline __attribute__((always_inline)) char *init_str(char **str, int i)
// {
//     size_t ite = (size_t)log10(i) + 1;
//     char *m_str = malloc(strlen(*str) + 1 + ite);
//     if (m_str == NULL) {
//         fprintf(stderr, "Memory Allocation Failed!");
//         exit(1);
//     }
//     strcpy(m_str, *str);
//     m_str[strlen(*str) + ite] = '\0';
//     for (size_t j = 1; j <= ite; ++j) {
//         m_str[strlen(*str) + ite - j] = 48 + i % 10;
//         i = (i - i % 10) / 10;
//     }
//     return m_str;
// }

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
