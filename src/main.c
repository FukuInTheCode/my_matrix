#include "../includes/my.h"

double __exp(double x) {
    return my_exp(x, (int)(x*3));
}

int main(int argc, char* argv[]) {
    srand(time(NULL));
    my_Matrix A = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};
    my_Matrix B = {.m=0, .n=0};

    my_Matrix_Create(2, 2, 1, &A);
    my_Matrix_RandInt(1, 10, 1, &A);

    my_Matrix_Copy(&A, &result);

    my_Matrix_AddCol(&result, 1, &B);

    my_Matrix_ConcatCol(&result, &A, &B);

    my_Matrix_Print(2, &A, &result);

    printf("%f, %f", my_Matrix_Sum(&A), my_Matrix_Sum(&result));

    my_Matrix_Free(3, &A, &result, &B);

    return 0;
}