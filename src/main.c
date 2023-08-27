#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));

    my_matrix_t A = {.m = 0, .n = 0, .name = "A"};
    my_matrix_create(2, 2, 1, &A);
    my_matrix_randfloat(-1, 1, 1, &A);
    my_matrix_print(1, &A);

    my_matrix_t *arr_matrix;
    my_matrix_create_array(&arr_matrix, "W", 3, 10, 1, 2, 1, 2, 1);
    my_matrix_randfloat(-1, 1, 2, &(arr_matrix[0]), &(arr_matrix[1]));
    my_matrix_set(&(arr_matrix[0]), 0, 0, 0);
    my_matrix_print_array(&arr_matrix, 3);

    return 0;
}
