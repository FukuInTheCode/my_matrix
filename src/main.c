#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));
    my_Matrix A = {.m=0, .n=0};
    my_Matrix B = {.m=0, .n=0};
    my_Matrix C = {.m=0, .n=0};
    my_Matrix T = {.m=0, .n=0};

    my_Matrix_Create(2, 2, 1, &A);
    my_Matrix_RandInt(1, 10, 1, &A);

    my_Matrix_SwapCol(&A, 0, 1, &B);
    my_Matrix_SwapRow(&B, 0, 1, &C);

    my_Matrix_T(&A, &T);

    // my_Matrix_ConcatRow(&B, &A, &result);

    // my_Matrix_Copy(&B, &result);

    // my_Matrix_ConcatCol(&A, &B, &result);

    my_Matrix_Print(3, &A, &C, &T);

    my_Matrix_Free(4, &A, &C, &B, &T);

    return 0;
}