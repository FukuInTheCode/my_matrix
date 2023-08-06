#pragma once
#define MYH

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>

#define SWAP(A, B) A ^= B ^= A ^= B;

typedef struct my_Matrix {
    unsigned int m;
    unsigned int n;
    int **arr;
} my_Matrix;

void my_Matrix_Create(unsigned int m, unsigned int n, const unsigned int count, ...);
void my_Matrix_Identity(my_Matrix* A);
void my_Matrix_Set(my_Matrix* A, unsigned int x, unsigned int y, int n);
void my_Matrix_Print(my_Matrix* A);
void my_Matrix_Free(const unsigned int count, ...);
void my_Matrix_MultiplyByScalar(my_Matrix* A, int scalar, my_Matrix* result);
void my_Matrix_Add(my_Matrix* result, const unsigned int count, ...);
void my_Matrix_T(my_Matrix* A, my_Matrix* T);
void my_Matrix_GetColumn(my_Matrix* A, unsigned int n, int result[]);
int* my_Matrix_GetRow(my_Matrix* A, unsigned int i);
void my_Matrix_Product(my_Matrix* result, const unsigned int count, ...);
int dot_product(int* a, int* b, unsigned int size);
void my_Matrix_Copy(my_Matrix* A, my_Matrix* copy);
void my_Matrix_PowerInt(my_Matrix* A, const unsigned int n, my_Matrix* result);
void my_Matrix_Rand(my_Matrix* A, int min, int max);