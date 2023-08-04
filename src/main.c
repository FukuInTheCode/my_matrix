#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m=0, .n=0};
    my_Matrix B = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};

    my_Matrix_Create(&A, 2, 3);
    my_Matrix_Create(&B, 2, 3);

    my_Matrix_Rand(&A, 0, 10);
    my_Matrix_Rand(&B, 0, 10);

    my_Matrix_Add(&A, &B, &result);

    my_Matrix_Print(&A);
    my_Matrix_Print(&B);
    my_Matrix_Print(&result);

    return 0;
}