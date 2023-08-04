#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m=0, .n=0};
    my_Matrix B = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};

    my_Matrix_Create(&A, 2, 2);

    my_Matrix_Identity(&A);

    my_Matrix_Set(&A, 0, 0, 2);

    my_Matrix_Product(&A, &A, &result);

    my_Matrix_Print(&A);
    my_Matrix_Print(&B);
    my_Matrix_Print(&result);

    return 0;
}