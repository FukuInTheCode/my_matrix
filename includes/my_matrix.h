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
void my_matrix_identity(const unsigned int count, ...);
void my_matrix_set(my_matrix* A, unsigned int x, unsigned int y, double n);
void my_Matrix_Print(const unsigned int count, ...);
void my_matrix_free(const unsigned int count, ...);
void my_matrix_multiplybyscalar(my_matrix* A, double scalar, my_matrix* result);
void my_Matrix_Add(my_matrix* result, const unsigned int count, ...);
void my_matrix_transpose(my_matrix* A, my_matrix* T);
void my_matrix_getcolumn(my_matrix* A, unsigned int n, double result[]);
double* my_matrix_getrow(my_matrix* A, unsigned int i);
void my_Matrix_Product(my_matrix* result, const unsigned int count, ...);
void my_matrix_copy(my_matrix* A, my_matrix* copy);
void my_matrix_powerint(my_matrix* A, const unsigned int n, my_matrix* result);
void my_Matrix_RandInt(int minN, int maxN, const unsigned int count, ...);
void my_Matrix_RandFloat(double minN, double maxN, \
    const unsigned int count, ...);
double my_matrix_det(my_matrix *A);
void my_matrix_getsubmatrix(my_matrix *A, \
    const unsigned int m, const unsigned int n, my_matrix *result);
void my_matrix_adjugate(my_matrix *A, my_matrix *result);
void my_matrix_inverse(my_matrix *A, my_matrix *result);
void my_matrix_addscalar(my_matrix* A, double scalar, my_matrix* result);
void my_matrix_applyfunc(my_matrix *A, UnaryFunction func, my_matrix *result);
double my_Matrix_Sum(my_matrix *A);
void my_matrix_one(my_matrix *A, my_matrix *result);
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
double my_matrix_max(my_matrix *A);
double my_matrix_min(my_matrix *A);
void my_matrix_product_elementwise(my_matrix* result,\
    const unsigned int count, ...);
double my_matrix_maxcol(my_matrix *A, const unsigned int n);
double my_matrix_maxrow(my_matrix *A, const unsigned int m);
double my_matrix_mincol(my_matrix *A, const unsigned int n);
double my_matrix_minrow(my_matrix *A, const unsigned int m);
