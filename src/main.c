#include "../includes/my.h"

int main(int argc, char* argv[]) {
    if(argc < 3) return 1;
    
    my_Matrix m;
    my_Matrix result;

    my_Matrix_Create(&m, atoi(argv[1]), atoi(argv[2]));

    my_Matrix_Identity(&m);

    my_Matrix_Print(&m);

    my_Matrix_PowerInt(&m, atoi(argv[3]), &result);

    my_Matrix_Free(&m);
    my_Matrix_Free(&result);
    return 0;
}