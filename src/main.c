#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));

    my_matrix_t *arr;
    my_matrix_create_array(&arr, "B", 1, 2, 2);

    my_matrix_print(1, arr[0]);

    my_matrix_create(10, 10, 1, &(arr[0]));
    my_matrix_print(1, arr[0]);

    my_matrix_free_array(&arr, 1);

    return 0;
}
