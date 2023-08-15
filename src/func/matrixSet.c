#include "../../includes/my.h"

void my_matrix_set(my_matrix* A, unsigned int x, unsigned int y, double n) {
    if(x > A->n || y > A->m) return;

    A->arr[y][x] = n;
}
