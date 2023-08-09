#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m = 0, .n = 0};
    my_Matrix B = {.m = 0, .n = 0};
    my_Matrix result = {.m=0, .n=0};

    my_Matrix_Create(2, 2, 1, &A);
    my_Matrix_RandInt(1, 5, 1, &A);
    
    my_Matrix_Inverse(&A, &B);

    my_Matrix_Print(2, &A, &B);

    my_Matrix_Product(&result, 2, &A, &B);

    my_Matrix_Print(1, &result);
    
    my_Matrix_Free(3, &A, &result, &B);
    return 0;
}