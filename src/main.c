#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));
    my_matrix_t *arr;

    my_matrix_t *cpy;

    my_matrix_create_array(&arr, "Bite", 3, 1, 1, 2, 2, 3, 3);
    my_matrix_randfloat(-30, 30, 1, &(arr[2]));
    my_matrix_set(&(arr[2]), 0, 0, -10);

    my_matrix_print_array(&arr, 3);

    my_matrix_copy_array(&arr, &cpy, 3, "zizi");

    my_matrix_print_array(&cpy, 3);

    return 0;
}
