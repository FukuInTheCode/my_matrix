#include "../../includes/my.h"

int dot_product(int* a, int* b, unsigned int size) {
    int result = 0;
    unsigned int i;
    for(i = 0; i<size; i++) {
        result += a[i]*b[i];
    }
    return result;
}

int my_power(int x, unsigned int n) {
    int res = 1;
    unsigned int i;
    for(i=0; i<n; i++) {
        res *= x;
    }
    return res;
}