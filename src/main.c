#include "../includes/my.h"

int main(int argc, char* argv[])
{
    my_matrix A = {.m = 0, .n = 0};
    my_matrix B = {.m = 0, .n = 0};
    my_matrix_create(2, 2, 2, &A, &B);
    my_matrix_randfloat(1, 2, 1, &A);
    my_matrix_print(2, &A, &B);
    printf("%u\n", my_matrix_equals(&A, &B));
    return 0;
}