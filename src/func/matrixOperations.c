#include "../../includes/my.h"


void my_Matrix_MultiplyByScalar(my_Matrix* A, int scalar, my_Matrix* result) {
    int i, j;
    my_Matrix_Copy(A, result);
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            result->arr[i][j] *= scalar;
        }
    }
}

void my_Matrix_Add(my_Matrix* A, my_Matrix* B, my_Matrix* result) {
    if(A->m != B->m || A->n != B->n) return;
    my_Matrix_Copy(A, result);
    int i, j;
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {;
            result->arr[i][j] += B->arr[i][j];
        }
    }
}

void my_Matrix_T(my_Matrix* A, my_Matrix* T) {
    my_Matrix_Create(T, A->n, A->m);
    int i, j;
    for(i = 0; i< T->m; i++) {
        for(j = 0; j<T->n; j++) {
            T->arr[i][j] = A->arr[j][i];
        }
    }
}

void my_Matrix_Product(my_Matrix* A, my_Matrix* B, my_Matrix* result) {
    if(A->n != B->m) return;

    my_Matrix_Create(result, A->m, B->n);

    int i, j;
    for(i=0; i<result->m; i++) {
        int* row = my_Matrix_GetRow(A, i);
        for(j=0;j<result->n; j++) {
            int column[B->m];
            my_Matrix_GetColumn(B, j, column);
            my_Matrix_Set(result, i, j, dot_product(row, column, A->n));
        }
    } 


}

void my_Matrix_PowerInt(my_Matrix* A, const unsigned int n, my_Matrix* result) {
    if(n==0) {
        my_Matrix_Identity(result);
        return;
    } else if(n == 1) {
        my_Matrix_Copy(A, result);
        return;
    }

    unsigned int i;
    my_Matrix copy;
    my_Matrix_Copy(A, &copy);
    for(i=2; i<=n; i++) {
        my_Matrix_Product(A, &copy, result);
        my_Matrix_Copy(result, &copy);
    }
}