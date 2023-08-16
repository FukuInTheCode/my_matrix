#include "../includes/my.h"

void test(my_matrix_t **A)
{
    *A = malloc(sizeof(my_matrix_t));
    if (A == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return;
    }
    my_matrix_create(2, 2, 1, A);

}

int main(int argc, char* argv[])
{
    srand(time(NULL));
    my_matrix_t *E = NULL;
    test(&E);

    printf("%u\n", E->m);
    printf("%u\n", E->n);
    my_matrix_free(1, E);
    free(E);
    return 0;
}
