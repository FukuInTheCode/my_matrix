#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m = 0, .n = 0};
    my_Matrix B = {.m = 0, .n = 0};
    my_Matrix C = {.m = 0, .n = 0};
    my_Matrix D = {.m = 0, .n = 0};
    my_Matrix result = {.m = 0, .n = 0};

    const unsigned int m = atoi(argv[1]), n = atoi(argv[2]);

    my_Matrix_Create(&A, m, n);
    my_Matrix_Rand(&A, 0, 10);
    my_Matrix_Print(&A);
    my_Matrix_Create(&B, m, n);
    my_Matrix_Rand(&B, 0, 10);
    my_Matrix_Print(&B);
    my_Matrix_Create(&C, m, n);
    my_Matrix_Rand(&C, 0, 10);
    my_Matrix_Print(&C);
    my_Matrix_Create(&D, m, n);
    my_Matrix_Rand(&D, 0, 10);
    my_Matrix_Print(&D);

    printf("REsult:\n");

    my_Matrix_Add(&result, 4, &A, &B, &C, &D);

    my_Matrix_Print(&result);

    return 0;
}