#include "../includes/my.h"

int main(int argc, char* argv[])
{
    srand(time(NULL));
    MAT_DECLA(A);
    my_matrix_create(1, 1, 1, &A);
    my_matrix_print(1, &A);
    my_matrix_create(2, 2, 1, &A);
    my_matrix_identity(1, &A);
    my_matrix_print(1, &A);
    MAT_FREE(A);
    return 0;
}
