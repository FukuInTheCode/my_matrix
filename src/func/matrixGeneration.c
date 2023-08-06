#include "../../includes/my.h"

void my_Matrix_Set(my_Matrix* A, unsigned int x, unsigned int y, int n) {
    if(x > A->n || y > A->m) return;

    A->arr[y][x] = n;
}

void my_Matrix_Identity(my_Matrix* A) {
    if(A->m != A->n) return;
    unsigned int i, j;
    for(i = 0; i<A->m; i++) {
        for(j = 0; j<A->n; j++) {
            my_Matrix_Set(A, j, i, 0);
        }
    }
    for(i = 0; i<A->m; i++) {
        my_Matrix_Set(A, i, i, 1);
    }
}

void my_Matrix_Copy(my_Matrix* A, my_Matrix* copy) {
    my_Matrix_Create(A->m, A->n, 1, copy);
    unsigned int i, j;
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            my_Matrix_Set(copy, j, i, A->arr[i][j]);
        }
    }
}

