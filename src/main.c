#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));
    my_matrix_t a = {.n = 0, .m = 0};

    my_matrix_create(2, 2, 1, &a);

    my_matrix_print(1, &a);

    my_matrix_free(1, &a);
}
