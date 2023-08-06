#include "../../includes/my.h"

void __Rand(my_Matrix *A, int min, int max) {
    max++;
    if(min>max) {
        SWAP(min, max)
    }
    unsigned int i, j;
    for(i = 0; i<A->m; i++) {
        for(j = 0; j<A->n; j++) {
            my_Matrix_Set(A, j, i, rand() % (max - min) + min);
        }
    }

}

void my_Matrix_Rand(int min, int max, const unsigned int count, ...) {
    va_list args;
    va_start(args, count);
    unsigned int i;
    for(i = 0; i<count; i++) {
        my_Matrix *A = va_arg(args, my_Matrix *);
        __Rand(A, min, max);
    }
    va_end(args);
}