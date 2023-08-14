#include "../../includes/my.h"

void my_Matrix_Broadcasting(my_Matrix *A, unsigned int m, unsigned int n, my_Matrix *result) {
    if(A->m > 1 && m>A->m) m = A->m;
    if(A->n > 1 && n>A->n) n = A->n;

    my_Matrix_Create(m, n, 1, result);
    unsigned int i;
    if(A->m == 1 && A->n == 1) {
        my_Matrix tmp = {.m=0, .n=0};
        my_Matrix_AddScalar(result, A->arr[0][0], &tmp);
        my_Matrix_Copy(&tmp, result);
        my_Matrix_Free(1, &tmp);
        return;
    }
    if(A->m == 1) {
        for(i=0; i<A->n; i++) my_Matrix_SetCol(result, i, A->arr[0][i]);
    } else if(A->n == 1) {
        for(i=0; i<A->m; i++) my_Matrix_SetRow(result, i, A->arr[i][0]);
    } else my_Matrix_Copy(A, result);
}