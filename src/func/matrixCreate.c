#include "../../includes/my.h"

void __Create(my_matrix *A, unsigned int m, unsigned int n) {
    A->m = m;
    A->n = n;
    A->arr = malloc(m * sizeof(double*));
    if (A->arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    unsigned int i;
    for(i=0; i<m; i++) {
        A->arr[i] = calloc(n, sizeof(double));
        if (A->arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(1);
        }
    }
}

void my_matrix_create(unsigned int m, unsigned int n, const unsigned int count, ...) {
    va_list args;
    va_start(args, count);
    unsigned int i;
    for(i=0; i<count; i++) {
        my_matrix *A = va_arg(args, my_matrix *);
        my_matrix_free(1, A);
        __Create(A, m, n);
    }
    va_end(args);
}