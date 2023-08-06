#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m = 0, .n = 0};
    my_Matrix B = {.m = 0, .n = 0};
    my_Matrix C = {.m = 0, .n = 0};
    // my_Matrix D = {.m = 0, .n = 0};
    my_Matrix result = {.m = 0, .n = 0};

    my_Matrix_Create(2, 2, 3, &A, &B, &C);
    my_Matrix_Rand(&A, 0, 1);
    my_Matrix_Print(&A);
    my_Matrix_Rand(&B, 0, 1);
    my_Matrix_Print(&B);
    my_Matrix_Rand(&C, 0, 10);
    my_Matrix_Print(&C);
    // my_Matrix_Create(&D, m, n);
    // my_Matrix_Rand(&D, 0, 10);
    // my_Matrix_Print(&D);

    printf("REsult:\n");

    my_Matrix_Product(&result, 3, &B, &A, &C);

    my_Matrix_Print(&result);

    my_Matrix_Free(4, &A, &B, &C, &result);

    return 0;
}