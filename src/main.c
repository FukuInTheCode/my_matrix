#include "../includes/my.h"

int gcd(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int argc, char* argv[])
{
    srand(time(NULL));
    for (uint32_t i = 0; i < 10000; i++) {
        printf("%u\n", i);
    }
    return 0;
}
