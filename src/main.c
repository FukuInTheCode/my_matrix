#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));
    for(int i = 0; i<1; i++) {
        my_Matrix A = {.m = 0, .n = 0};
        my_Matrix result = {.m=0, .n=0};

        my_Matrix_Create(8, 8, 1, &A);
        my_Matrix_Rand(0, 1, 1, &A);

        printf("Matrix:\n");

        my_Matrix_Print(1, &A);

        printf("Adjugate:\n");

        my_Matrix_Adjugate(&A, &result);

        my_Matrix_Print(1, &result);

        my_Matrix_Free(2, &A, &result);
    }
    return 0;
}