#include "../../includes/my.h"

void __Rand(my_Matrix)

void my_Matrix_Rand(my_Matrix* A, int min, int max) {
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