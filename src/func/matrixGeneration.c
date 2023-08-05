#include "../../includes/my.h"


void my_Matrix_Free(my_Matrix* A) {
    if(A->m == 0 || A->n == 0 || A->arr == NULL) return;
    unsigned int i;
    for (i = 0; i < A->m; i++) {
        free(A->arr[i]);
    }
    free(A->arr);
}

void my_Matrix_Create(my_Matrix* A, unsigned int m, unsigned int n) {
    my_Matrix_Free(A);
    A->m = m;
    A->n = n;
    A->arr = (int**)malloc(m * sizeof(int*));
    if (A->arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    unsigned int i;
    for(i=0; i<m; i++) {
        A->arr[i] = (int*)calloc(n, sizeof(int));
        if (A->arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(1);
        }
    }
}


void my_Matrix_Set(my_Matrix* A, unsigned int x, unsigned int y, int n) {
    if(0 > x  || x > A->n || 0 > y || y > A->m) return;

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
    my_Matrix_Create(copy, A->m, A->n);
    unsigned int i, j;
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            my_Matrix_Set(copy, j, i, A->arr[i][j]);
        }
    }
}

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