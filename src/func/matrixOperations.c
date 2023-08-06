#include "../../includes/my.h"


void my_Matrix_MultiplyByScalar(my_Matrix* A, int scalar, my_Matrix* result) {
    unsigned int i, j;
    my_Matrix_Copy(A, result);
    for(i = 0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            result->arr[i][j] *= scalar;
        }
    }
}

void my_Matrix_T(my_Matrix* A, my_Matrix* T) {
    my_Matrix_Create(A->n, A->m, 1, T);
    unsigned int i, j;
    for(i = 0; i< T->m; i++) {
        for(j = 0; j<T->n; j++) {
            T->arr[i][j] = A->arr[j][i];
        }
    }
}


void my_Matrix_PowerInt(my_Matrix* A, const unsigned int n, my_Matrix* result) {
    if(A->m != A->n) return;
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
        my_Matrix_Product(result, 2, A, &copy);
        my_Matrix_Copy(result, &copy);
    }
}