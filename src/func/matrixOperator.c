#include "../../includes/my.h"

void my_Matrix_MultiplyByScalar(my_Matrix* m, int scalar) {
    int i, j;
    for(i = 0; i<m->dimY; i++) {
        for(j=0; j<m->dimY; j++) {
            m->arr[i][j] *= scalar;
        }
    }

}