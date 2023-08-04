#include "../includes/my.h"

int main(int argc, char* argv[]) {
    if(argc < 2) return 1;
    
    my_Matrix m;
    my_Matrix m2;

    my_Matrix_Create(&m, atoi(argv[1]), atoi(argv[2]));

    my_Matrix_Set(&m, 1, 0, 4);

    my_Matrix_T(&m, &m2);

    my_Matrix_Print(&m);
    my_Matrix_Print(&m2);

    my_Matrix_Free(&m);
    my_Matrix_Free(&m2);
    return 0;
}