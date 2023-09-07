#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(69);

    MAT_DECLA(x);
    MAT_DECLA(y);
    MAT_DECLA(xx);
    MAT_DECLA(yy);

    my_matrix_linspace(&x, 0, 5, 6);
    my_matrix_linspace(&y, 6, 11, 6);

    my_matrix_meshgrid(&x, &y, &xx, &yy);

    MAT_PRINT(x);
    MAT_PRINT(y);
    MAT_PRINT(xx);
    MAT_PRINT(yy);

    MAT_FREE(x);
    MAT_FREE(y);
    MAT_FREE(xx);
    MAT_FREE(yy);

    return 0;
}
