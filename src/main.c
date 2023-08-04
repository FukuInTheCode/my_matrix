#include "../includes/my.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    if(argc < 2) return 1;
    
    my_Matrix m;
    my_Matrix m2;

    my_Matrix_Create(&m, atoi(argv[1]), atoi(argv[2]));
    my_Matrix_Create(&m2, atoi(argv[1]), atoi(argv[2]));

    my_Matrix_Identity(&m);
    my_Matrix_Identity(&m2);
    
    my_Matrix_Print(&m);

    my_Matrix_Free(&m);
    return 0;
}