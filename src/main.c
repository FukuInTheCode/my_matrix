#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m = 0, .n = 0};
    my_Matrix B = {.m = 0, .n = 0};
    // my_Matrix C = {.m = 0, .n = 0};
    // my_Matrix D = {.m = 0, .n = 0};
    my_Matrix result = {.m = 0, .n = 0};

    my_Matrix_Create(1, 2, 1, &A);
    my_Matrix_Create(2, 1, 1, &B);
    my_Matrix_Rand(0, 10, 2, &A, &B);
    my_Matrix_Print(2, &A, &B);

    printf("Product:\n");

    my_Matrix_Product(&result, 2, &A, &B);

    my_Matrix_Print(1, &result);

    my_Matrix_Free(3, &A, &B, &result);

    return 0;
}