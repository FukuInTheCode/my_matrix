#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));

    MAT_DECLA(a);
    MAT_DECLA(b);
    MAT_DECLA(c);
    MAT_DECLA(d);

    my_matrix_create(2, 2, 1, &a);
    my_matrix_create(1, 1, 1, &b);
    my_matrix_randint(-10, 10, 2, &a, &b);

    MAT_PRINT(a);
    MAT_PRINT(b);

    my_matrix_copy(&a, &c);
    MAT_PRINT(c);

    printf("--------\n");
    printf("--------\n");
    printf("--------\n");
    printf("--------\n");

    my_matrix_add(&c, 2, &a, &b);
    MAT_PRINT(c);

    my_matrix_free(2, &a, &b);
    return 0;
}
