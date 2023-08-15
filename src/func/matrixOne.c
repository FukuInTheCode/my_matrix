#include "../../includes/my.h"

double __setOne(double x) {
    if(x == 0) return 1;
    return x/x;
}

void my_Matrix_One(my_matrix *A, my_matrix *result) {
    my_matrix_applyfunc(A, __setOne, result);
}