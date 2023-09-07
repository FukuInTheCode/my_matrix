#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(69);

    MAT_DECLA(A);
    MAT_DECLA(B);
    MAT_DECLA(C);

    // my_matrix_linspace(&A, -10, 10, 21);
    my_matrix_create(4, 3, 1, &A);
    my_matrix_randint(0, 10, 1, &A);

    my_matrix_transform(&A, 2, 6, &B);
    my_matrix_transform(&A, 3, 4, &C);

    MAT_PRINT(A);
    MAT_PRINT(B);
    MAT_PRINT(C);

    MAT_FREE(A);
    MAT_FREE(B);
    MAT_FREE(C);

    return 0;
}
