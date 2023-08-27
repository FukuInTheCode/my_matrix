#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));

    // my_matrix_t A = {.m = 0, .n = 0, .name = "A"};
    // my_matrix_create(2, 2, 1, &A);
    // my_matrix_print(1, &A);

    my_matrix_t *arr_matrix;
    my_matrix_create_array(&arr_matrix, "W", 2, 2, 2, 2, 2);
    my_matrix_print_array(&arr_matrix, 2);

    return 0;
}
