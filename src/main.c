#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m = 0, .n = 0};
    my_Matrix inverse = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};

    unsigned int i, j;
            my_Matrix_Create(3, 3, 1, &A);
            my_Matrix_Rand(0, 10, 1, &A);

            printf("Matrix:\n");

            my_Matrix_Print(1, &A);
                    
            my_Matrix_Inverse(&A, &inverse);

            printf("Inverse:\n");
            
            my_Matrix_Print(1, &inverse);

            // printf("Inverse2:\n");

            // my_Matrix_Inverse(&inverse, &result);

            // my_Matrix_Print(1, &result);

            printf("product:\n");

            my_Matrix_Product(&result, 2, &A, &inverse);
            my_Matrix_Print(1, &result);
    my_Matrix_Free(3, &A, &inverse, &result);
    return 0;
}