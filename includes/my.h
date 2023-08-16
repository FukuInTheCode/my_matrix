#pragma once
#define MYH

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my_matrix.h"


static inline __attribute__((always_inline)) void swap(double *a, double *b)
{
    const int temp = *a;
    *a = *b;
    *b = temp;
}

#define FALSE 0
#define TRUE 1
