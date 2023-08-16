#include "../includes/my.h"


int main(int argc, char* argv[])
{
    srand(time(NULL));
    my_matrix_t **arr;
    my_matrix_create_arr(2, 2, &arr, 3);
    my_matrix_randint(0, 10, 2, arr[1], arr[2]);
    my_matrix_product(arr[0], 2, arr[2], arr[1]);
    my_matrix_print_arr(&arr, 3);
    my_matrix_free_arr(&arr, 3);
    return 0;
}
