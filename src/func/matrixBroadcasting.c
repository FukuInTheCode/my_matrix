#include "../../includes/my.h"

void my_Matrix_Broadcasting(my_Matrix *A, const unsigned int m, const unsigned int n, my_Matrix *result) {

    my_Matrix_Create(m, n, 1, result);

    unsigned int i;
    unsigned int j;

    for(i=0; i<A->m; i++) {
        for(j = 0; j<A->n; j++) {
            // ...
        }
    }

}