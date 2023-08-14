#include "../../includes/my.h"

double my_Matrix_Min(my_Matrix *A) {
    double min = A->arr[0][0];
    unsigned int i;
    unsigned int j;
    for(i=0; i<A->m; i++) {
        for(j=0; j<A->n; j++) {
            if(min > A->arr[i][j]) min = A->arr[i][j]; 
        }
    }
    return min;
}