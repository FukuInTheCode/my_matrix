#include "../../includes/my.h"



int my_Matrix_Add_isValid(va_list args, const unsigned int count) {
    my_Matrix* A = va_arg(args, my_Matrix*);
    int baseM = A->m;
    int baseN = A->n;
    unsigned int i;
    for(i=0; i<count-1; i++) {
        A = va_arg(args, my_Matrix*);
        if(A->m != baseM || A->n != baseN) return 1;
    }
    return 0;
}


void my_Matrix_Add(my_Matrix* result, const unsigned count, ...) {
    va_list args;
    va_list args_copy;
    va_copy(args_copy, args);
    va_start(args_copy, count);
    if (my_Matrix_Add_isValid(args_copy, count) == 1) {
        va_end(args_copy);
        return;
    }
    va_end(args_copy);
    va_start(args, count);
    my_Matrix* A = va_arg(args, my_Matrix*); 
    my_Matrix_Copy(A, result);
    unsigned int i, j, h;
    for(i=0; i < (count-1); i++) {
        A = va_arg(args, my_Matrix*);
        for(j=0; j<result->m; j++) {
            for(h=0; h<result->n; h++) {
                result->arr[j][h] += A->arr[j][h];
            }
        }
    }
}