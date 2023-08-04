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
        for(j=0; j<m1->dimX; j++) {;
            m1->arr[i][j] += m2->arr[i][j];
        }
    }
}

void my_Matrix_T(my_Matrix* m, my_Matrix* mT) {
    my_Matrix_Create(mT, m->dimY, m->dimX);
    int i, j;
    for(i = 0; i< mT->dimY; i++) {
        for(j = 0; j<mT->dimX; j++) {
            mT->arr[i][j] = m->arr[j][i];
        }
    }
}