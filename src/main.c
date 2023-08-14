#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));
    my_Matrix A = {.m=0, .n=0};
    my_Matrix B = {.m=0, .n=0};
    my_Matrix C = {.m=0, .n=0};
    my_Matrix T = {.m=0, .n=0};

    my_Matrix_Create(2, 2, 1, &A);
    my_Matrix_RandInt(1, 10, 1, &A);

    my_Matrix_SetCol(&A, 0, 29);

    my_Matrix_SumRow(&A, &B);
    my_Matrix_SumCol(&A, &C);

    my_Matrix_Print(3, &A, &B, &C);

    my_Matrix_Free(4, &A, &C, &B, &T);

    return 0;
}