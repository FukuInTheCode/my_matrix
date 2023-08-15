#pragma once
#define MYMATRIXH

#include "./my_math.h"

typedef struct my_matrix {
    unsigned int m;
    unsigned int n;
    double **arr;
} my_matrix;

typedef double (*UnaryFunction)(double);

void my_matrix_create(unsigned int m, unsigned int n, \
    const unsigned int count, ...);
void my_Matrix_Identity(const unsigned int count, ...);
void my_matrix_set(my_matrix* A, unsigned int x, unsigned int y, double n);
void my_Matrix_Print(const unsigned int count, ...);
void my_matrix_free(const unsigned int count, ...);
void my_Matrix_MultiplyByScalar(my_matrix* A, double scalar, my_matrix* result);
void my_Matrix_Add(my_matrix* result, const unsigned int count, ...);
void my_Matrix_T(my_matrix* A, my_matrix* T);
void my_Matrix_GetColumn(my_matrix* A, unsigned int n, double result[]);
double* my_Matrix_GetRow(my_matrix* A, unsigned int i);
void my_Matrix_Product(my_matrix* result, const unsigned int count, ...);
void my_matrix_copy(my_matrix* A, my_matrix* copy);
void my_Matrix_PowerInt(my_matrix* A, const unsigned int n, my_matrix* result);
void my_Matrix_RandInt(int minN, int maxN, const unsigned int count, ...);
void my_Matrix_RandFloat(double minN, double maxN, \
    const unsigned int count, ...);
double my_matrix_det(my_matrix *A);
void my_Matrix_getsubmatrix(my_matrix *A, \
    const unsigned int m, const unsigned int n, my_matrix *result);
void my_Matrix_Adjugate(my_matrix *A, my_matrix *result);
void my_Matrix_Inverse(my_matrix *A, my_matrix *result);
void my_matrix_addscalar(my_matrix* A, double scalar, my_matrix* result);
void my_matrix_applyfunc(my_matrix *A, UnaryFunction func, my_matrix *result);
double my_Matrix_Sum(my_matrix *A);
void my_Matrix_One(my_matrix *A, my_matrix *result);
void my_Matrix_AddCol(my_matrix *A, const unsigned int n, my_matrix *result);
void my_matrix_addrow(my_matrix *A, const unsigned int m, my_matrix *result);
void my_matrix_concatcol(my_matrix *result, my_matrix *A, my_matrix *B);
void my_matrix_concatrow(my_matrix *result, my_matrix *A, my_matrix *B);
int my_matrix_equals(my_matrix *A, my_matrix *B);
void my_Matrix_SwapRow(my_matrix *A, const unsigned int a, \
    const unsigned int b, my_matrix *result);
void my_Matrix_SwapCol(my_matrix *A, const unsigned int a,\
    const unsigned int b, my_matrix *result);
void my_Matrix_SumCol(my_matrix *A, my_matrix *result);
void my_Matrix_SumRow(my_matrix *A, my_matrix *result);
void my_Matrix_SetRow(my_matrix *A, const unsigned int m, const double x);
void my_matrix_setcol(my_matrix *A, const unsigned int n, const double x);
void my_matrix_broadcasting(my_matrix *A, const unsigned int m, \
    const unsigned int n, my_matrix *result);
double my_Matrix_Max(my_matrix *A);
double my_Matrix_Min(my_matrix *A);
void my_matrix_product_elementwise(my_matrix* result,\
    const unsigned int count, ...);
double my_Matrix_MaxCol(my_matrix *A, const unsigned int n);
double my_Matrix_MaxRow(my_matrix *A, const unsigned int m);
double my_Matrix_MinCol(my_matrix *A, const unsigned int n);
double my_Matrix_MinRow(my_matrix *A, const unsigned int m);
