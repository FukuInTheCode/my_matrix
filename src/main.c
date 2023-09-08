#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(69);

    MAT_DECLA(x);
    MAT_DECLA(y);
    MAT_DECLA(xx);
    MAT_DECLA(yy);

    double arr[12];
    my_matrix_create(3, 4, 1, &x);
    my_matrix_randfloat(-10, 10, 1, &x);

    my_matrix_to_array(&x, &arr);
    MAT_PRINT(x);

    for (uint8_t i = 0; i < 12; ++i) {
        printf("%lf\n", arr[i]);
    }

    MAT_PRINT(y);
    MAT_PRINT(xx);
    MAT_PRINT(yy);

    MAT_FREE(x);
    MAT_FREE(y);
    MAT_FREE(xx);
    MAT_FREE(yy);

    return 0;
}
