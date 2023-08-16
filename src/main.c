#include "../includes/my.h"

double my_func(double x)
{
    return 2*x;
}

int main(int argc, char* argv[])
{
    srand(time(NULL));
    my_matrix A = {.m = 0, .n = 0};
    my_matrix B = {.m = 0, .n = 0};
    my_matrix C = {.m = 0, .n = 0};
    my_matrix D = {.m = 0, .n = 0};
    my_matrix_create(2, 2, 2, &A, &B);
    my_matrix_randint(1, 3, 2, &A, &B);
    my_matrix_product(&C, 2, &A, &B);
    my_matrix_print(4, &A, &B, &C, &D);
    my_matrix_free(4, &A, &B, &C, &D);
    return 0;
}
