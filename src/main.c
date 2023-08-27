#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));

    my_matrix_t A = {.m = 0, .n = 0, .name = "A"};

    double arr[] = {
        0,  1,  2,
        3,  4,  5,
        6,  7,  8,
    };

    my_matrix_create(2, 2, 1, &A);
    my_matrix_print(1, &A);
    my_matrix_fill_from_array(&A, arr, sizeof(arr) / sizeof(arr[0]));
    my_matrix_print(1, &A);

    my_matrix_free(1, &A);

    return 0;
}
