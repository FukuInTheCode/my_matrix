#pragma once
#define MYH

typedef struct my_Matrix {
    int dimX;
    int dimY;
    int** arr;
} my_Matrix;

void my_Matrix_Create(my_Matrix* m, int x, int y);
void my_Matrix_Print(my_Matrix* m);
void my_Matrix_Free(my_Matrix* m);