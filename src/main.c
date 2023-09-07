#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(69);

    MAT_DECLA(A);

    my_matrix_linspace(&A, -10, 10, 21);

    my_matrix_transpose_2(&A);

    MAT_PRINT(A);

    MAT_FREE(A);

    return 0;
}
