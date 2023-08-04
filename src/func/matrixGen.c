#include "../../includes/my.h"
#include <stdio.h>
#include <stdlib.h>

void my_Matrix_Create(my_Matrix* m, int x, int y) {

    m->dimX = x;
    m->dimY = y;
    m->arr = (int**)malloc(y * sizeof(int*));
    if (m->arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    int i;
    for(i=0; i<y; i++) {
        m->arr[i] = (int*)calloc(x, sizeof(int));
        if (m->arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed.\n");
            exit(1);
        }
    }
}


void my_Matrix_Set(my_Matrix* m, int x, int y, int n) {
    if(0 > x  || x > m->dimX || 0 > y || y > m->dimY) return;

    m->arr[y][x] = n;
}

void my_Matrix_Identity(my_Matrix* m) {
    if(m->dimX != m->dimY) return;
    int i, j;
    for(i = 0; i<m->dimY; i++) {
        for(j = 0; j<m->dimX; j++) {
            my_Matrix_Set(m, j, i, 0);
        }
    }
    for(i = 0; i<m->dimX; i++) {
        my_Matrix_Set(m, i, i, 1);
    }
}


void my_Matrix_Free(my_Matrix* m) {
    for (int i = 0; i < m->dimX; i++) {
        free(m->arr[i]);
    }
    free(m->arr);
}