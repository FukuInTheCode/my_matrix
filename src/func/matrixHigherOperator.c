#include "../../includes/my.h"

void my_Matrix_PowerInt(my_Matrix* m, const unsigned int n, my_Matrix* result) {
    if(n==0) {
        my_Matrix_Identity(result);
        return;
    } else if(n == 1) {
        my_Matrix_Copy(m, result);
        return;
    }

    int i;
    my_Matrix copy;
    my_Matrix_Copy(m, &copy);
    for(i=2; i<=n; i++) {
        my_Matrix_Product(m, &copy, result);
        my_Matrix_Copy(result, &copy);
        printf("power: %d\n", i);
        my_Matrix_Print(result);
    }
}