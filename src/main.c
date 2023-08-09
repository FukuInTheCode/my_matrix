#include "../includes/my.h"

double timetwo(double x) {
    return x * 2;
}

int main(int argc, char* argv[]) {
    srand(time(NULL));
    my_Matrix A = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};

    my_Matrix_Create(2, 2, 1, &A);
    my_Matrix_RandInt(1, 10, 1, &A);

    my_Matrix_ApplyFunc(&A, timetwo, &result);


    my_Matrix_Print(2, &A, &result);

    printf("%f, %f", my_Matrix_Sum(&A), my_Matrix_Sum(&result));
    
    my_Matrix_Free(2, &A, &result);

    return 0;
}