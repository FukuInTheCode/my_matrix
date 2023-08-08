#include "../includes/my.h"

int main(int argc, char* argv[]) {
    srand(time(NULL));

    my_Matrix A = {.m = 0, .n = 0};
    my_Matrix inverse = {.m=0, .n=0};
    my_Matrix result = {.m=0, .n=0};
    
    my_Matrix_Free(3, &A, &inverse, &result);
    return 0;
}