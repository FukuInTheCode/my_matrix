#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m = 0, .n = 0};
    my_Matrix inverse = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};

    my_Matrix_Create(2, 2, 1, &A);
    my_Matrix_Rand(0, 1, 1, &A);

    printf("Matrix:\n");

    my_Matrix_Print(1, &A);
        
    my_Matrix_Inverse(&A, &inverse);

    printf("Inverse:\n");

    my_Matrix_Print(1, &inverse);

    printf("check:\n");

    my_Matrix_Product(&result, 2, &A, &inverse);

    my_Matrix_Print(1, &result);

    my_Matrix_Free(3, &A, &inverse, &result);
    return 0;
}