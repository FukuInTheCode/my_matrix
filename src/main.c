#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));
    my_matrix_t a = {.n = 0, .m = 0, .name = "A"};
    my_matrix_create(2, 2, 1, &a);

    my_matrix_print(1, &a);

    my_matrix_free(1, &a);
    my_matrix_t b = {.n = 0, .m = 0, .name = "B"};
    my_matrix_create(3, 3, 1, &b);
    my_matrix_randfloat(-10, 10, 1, &b);

    my_matrix_print(1, &b);

    my_matrix_free(1, &b);
}
