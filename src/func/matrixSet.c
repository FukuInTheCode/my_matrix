#include "../../includes/my.h"

void my_Matrix_Set(my_Matrix* A, unsigned int x, unsigned int y, int n) {
    if(x > A->n || y > A->m) return;

    A->arr[y][x] = n;
}
