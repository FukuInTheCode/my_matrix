#include "../../includes/my.h"

double my_Matrix_Max(my_matrix *A) {
    double max = A->arr[0][0];
    unsigned int i;
    unsigned int j;
    for(i=0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            if(max < A->arr[i][j]) max = A->arr[i][j]; 
        }
    }
    return max;
}