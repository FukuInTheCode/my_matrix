#pragma once
#define MYH

#define SWAP(A, B) A ^= B ^= A ^= B;

typedef struct my_Matrix {
    int dimX;
    int dimY;
    int** arr;
} my_Matrix;

void my_Matrix_Create(my_Matrix* m, int x, int y);
void my_Matrix_Identity(my_Matrix* m);
void my_Matrix_Set(my_Matrix* m, int x, int y, int n);
void my_Matrix_Print(my_Matrix* m);
void my_Matrix_Free(my_Matrix* m);
void my_Matrix_MultiplyByScalar(my_Matrix* m, int scalar, my_Matrix* result);
void my_Matrix_Add(my_Matrix* m1, my_Matrix* m2, my_Matrix* result);
void my_Matrix_T(my_Matrix* m, my_Matrix* mT);
void my_Matrix_GetColumn(my_Matrix* m, int n, int result[]);
int* my_Matrix_GetRow(my_Matrix* m, int i);
void my_Matrix_Product(my_Matrix* m1, my_Matrix* m2, my_Matrix* product);
int dot_product(int* a, int* b, int size);
void my_Matrix_Copy(my_Matrix* m, my_Matrix* copy);
void my_Matrix_PowerInt(my_Matrix* m, const unsigned int n, my_Matrix* result);
void my_Matrix_Rand(my_Matrix* m, int min, int max);