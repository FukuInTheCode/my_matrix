#pragma once
#define MYH

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SWAP(A, B) A ^= B ^= A ^= B;

typedef struct my_Matrix {
    int m;
    int n;
    int** arr;
} my_Matrix;

void my_Matrix_Create(my_Matrix* A, int m, int n);
void my_Matrix_Identity(my_Matrix* A);
void my_Matrix_Set(my_Matrix* A, int x, int y, int n);
void my_Matrix_Print(my_Matrix* A);
void my_Matrix_Free(my_Matrix* A);
void my_Matrix_MultiplyByScalar(my_Matrix* A, int scalar, my_Matrix* result);
void my_Matrix_Add(my_Matrix* A, my_Matrix* B, my_Matrix* result);
void my_Matrix_T(my_Matrix* A, my_Matrix* T);
void my_Matrix_GetColumn(my_Matrix* A, int n, int result[]);
int* my_Matrix_GetRow(my_Matrix* A, int i);
void my_Matrix_Product(my_Matrix* A, my_Matrix* B, my_Matrix* result);
int dot_product(int* a, int* b, int size);
void my_Matrix_Copy(my_Matrix* A, my_Matrix* copy);
void my_Matrix_PowerInt(my_Matrix* A, const unsigned int n, my_Matrix* result);
void my_Matrix_Rand(my_Matrix* A, int min, int max);