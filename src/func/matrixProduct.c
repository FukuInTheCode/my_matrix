#include "../../includes/my.h"


int __ProductisValid(va_list args, const unsigned int count) {
    my_matrix* A = va_arg(args, my_matrix*);
    unsigned int insideN = A->n;
    unsigned int i;
    for(i=0; i<(count-1); i++) {
        A = va_arg(args, my_matrix*);
        if(A->m != insideN) return 1;
        insideN = A->n;
    }
    return 0;
}

void __Product(my_matrix* A, my_matrix* B, my_matrix* result) {
    if(A->n != B->m) return;

    my_matrix_create(A->m, B->n, 1, result);

    unsigned int i, j;
    for(i=0; i<result->m; i++) {
        double* row = my_matrix_getrow(A, i);
        for(j=0;j<result->n; j++) {
            double column[B->m];
            my_matrix_getcolumn(B, j, column);
            my_matrix_set(result, j, i, dot_product(row, column, A->n));
        }
    } 
}


void my_Matrix_Product(my_matrix* result, const unsigned int count, ...) {
    va_list args;
    va_list args_copy;
    va_copy(args_copy, args);
    va_start(args_copy, count);
    if (__ProductisValid(args_copy, count) == 1) {
        va_end(args_copy);
        return;
    }
    va_end(args_copy);
    va_start(args, count);
    my_matrix* A = va_arg(args, my_matrix*);
    my_matrix copy = {.m = 0, .n = 0};
    my_matrix_copy(A, &copy);
    unsigned int i;
    for(i=0; i < (count-1); i++) {
        my_matrix* B = va_arg(args, my_matrix*);
        __Product(&copy, B, result);
        my_matrix_copy(result, &copy);
    }
    my_matrix_free(1, &copy);
}