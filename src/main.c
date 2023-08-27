#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));

    for (size_t i = 0; i < 1; ++i) {
        my_matrix_t A = {.m = 0, .n = 0, .name = "A"};
        my_matrix_create(2, 2, 1, &A);
        my_matrix_randfloat(-1, 1, 1, &A);
        my_matrix_print(1, &A);
        my_matrix_t B = {.m = 0, .n = 0, .name = "B"};
        my_matrix_create(2, 2, 1, &B);
        my_matrix_randint(-150, 10000, 1, &B);
        // my_matrix_set(&B, 1, 1, -9);
        // my_matrix_set(&B, 1, 0, 30);
        // my_matrix_set(&B, 0, 0, -7);
        my_matrix_set(&B, 0, 1, 0);
        my_matrix_print(1, &B);
        my_matrix_free(2, &A, &B);
    }

    return 0;
}
