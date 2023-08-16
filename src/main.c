#include "../includes/my.h"


int main(int argc, char* argv[])
{
    srand(time(NULL));
    my_matrix_t *arr;
    my_matrix_create_array(&arr, 3, 2, 2, 3, 3, 4, 4);
    my_matrix_print_array(&arr, 3);
    my_matrix_free_array(&arr, 3);
    return 0;
}
