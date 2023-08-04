#include "../../includes/my.h"

void my_Matrix_MultiplyByScalar(my_Matrix* m, int scalar) {
    int i, j;
    for(i = 0; i<m->dimY; i++) {
        for(j=0; j<m->dimY; j++) {
            m->arr[i][j] *= scalar;
        }
    }
}

void my_Matrix_Add(my_Matrix* m1, my_Matrix* m2) {
    if(m1->dimX != m2->dimX || m1->dimY != m2->dimY) return;
    int i, j;
    for(i = 0; i<m1->dimY; i++) {
        for(j=0; j<m1->dimY; j++) {;
            m1->arr[i][j] += m2->arr[i][j];
        }
    }
}