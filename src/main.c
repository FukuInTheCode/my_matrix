#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));
    my_Matrix A = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};
    my_Matrix B = {.m=0, .n=0};

    my_Matrix_Create(2, 2, 1, &A);
    my_Matrix_RandInt(1, -10, 1, &A);

    my_Matrix_SwapRow(&A, 0, 1, &result);

    // my_Matrix_ConcatRow(&B, &A, &result);

    // my_Matrix_Copy(&B, &result);

    // my_Matrix_ConcatCol(&A, &B, &result);

    my_Matrix_Print(2, &A, &result);

    printf("%f, %f, %d", my_Matrix_Sum(&A), my_Matrix_Sum(&result), my_Matrix_Equals(&A, &B));

    my_Matrix_Free(3, &A, &result, &B);

    return 0;
}