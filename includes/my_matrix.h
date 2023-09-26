#ifndef MYMATRIXH
#define MYMATRIXH

#include "./my_math.h"

#define FALSE 0

#define TRUE 1

#define MAT_PRINT(A) my_matrix_print(1, &A)

#define MAT_FREE(A) my_matrix_free(1, &A)

#define MAT_PRINT_DIM(A) printf("%s's dim: m = %u, n = %u\n", A.name, A.m, A.n)

#define MAT_DECLA(A) my_matrix_t A = {.n = 0, .m = 0, .name = #A}

typedef enum {
    my_false = FALSE,
    my_true = TRUE
} my_bool_t;

typedef struct my_matrix {
    char *name;
    uint32_t m;
    uint32_t n;
    double **arr;
} my_matrix_t;

typedef double (*temp_func)(double);

void my_matrix_create(uint32_t m, uint32_t n, \
    uint32_t const count, ...);
void my_matrix_identity(uint32_t const count, ...);
void my_matrix_set(my_matrix_t *A, uint32_t const m,\
                        uint32_t const n, double const  x);
void my_matrix_print(uint32_t const count, ...);
void my_matrix_free(uint32_t const count, ...);
void my_matrix_multiplybyscalar(my_matrix_t *A, double scalar, \
    my_matrix_t *result);
void my_matrix_add(my_matrix_t *result, uint32_t const count, ...);
void my_matrix_transpose(my_matrix_t *A, my_matrix_t* T);
void my_matrix_getcolumn(my_matrix_t *A, uint32_t n, double result[]);
double *my_matrix_getrow(my_matrix_t *A, uint32_t i);
void my_matrix_product(my_matrix_t* result, uint32_t const count, ...);
void my_matrix_copy(my_matrix_t *A, my_matrix_t *copy);
void my_matrix_powerint(my_matrix_t *A, uint32_t const n, my_matrix_t *result);
void my_matrix_randint(int const minN, int const maxN, \
    uint32_t const count, ...);
void my_matrix_randfloat(double const minN, double const maxN,\
    uint32_t const count, ...);
void my_matrix_getsubmatrix(my_matrix_t *A, uint32_t const m, \
    uint32_t const n, my_matrix_t *result);
void my_matrix_adjugate(my_matrix_t *A, my_matrix_t *result);
void my_matrix_inverse(my_matrix_t *A, my_matrix_t *result);
void my_matrix_addscalar(my_matrix_t *A, double scalar, my_matrix_t *result);
void my_matrix_applyfunc(my_matrix_t *A, temp_func func, \
    my_matrix_t *result);
double my_matrix_sum(my_matrix_t *A);
void my_matrix_one(my_matrix_t *A, my_matrix_t *result);
void my_matrix_addcol(my_matrix_t *A, uint32_t const n, my_matrix_t *result);
void my_matrix_addrow(my_matrix_t *A, uint32_t const m, my_matrix_t *result);
void my_matrix_concatcol(my_matrix_t *result, my_matrix_t *A, my_matrix_t *B);
void my_matrix_concatrow(my_matrix_t *result, my_matrix_t *A, my_matrix_t *B);
my_bool_t my_matrix_equals(my_matrix_t *A, my_matrix_t *B);
void my_matrix_swaprow(my_matrix_t *A, uint32_t const a, \
    uint32_t const b, my_matrix_t *result);
void my_matrix_swapcol(my_matrix_t *A, uint32_t const a, \
    uint32_t const b, my_matrix_t *result);
void my_matrix_sumcol(my_matrix_t *A, my_matrix_t *result);
void my_matrix_sumrow(my_matrix_t *A, my_matrix_t *result);
void my_matrix_setrow(my_matrix_t *A, uint32_t const m, double const x);
void my_matrix_setcol(my_matrix_t *A, uint32_t const n, double const x);
void my_matrix_broadcasting(my_matrix_t *A, uint32_t m, \
    uint32_t n, my_matrix_t *result);
double my_matrix_max(my_matrix_t *A);
double my_matrix_min(my_matrix_t *A);
void my_matrix_product_elementwise(my_matrix_t *result, \
    uint32_t const count, ...);
double my_matrix_maxcol(my_matrix_t *A, uint32_t const n);
double my_matrix_maxrow(my_matrix_t *A, uint32_t const m);
double my_matrix_mincol(my_matrix_t *A, uint32_t const n);
double my_matrix_minrow(my_matrix_t *A, uint32_t const m);
void my_matrix_free_array(my_matrix_t **arr, uint32_t size);
void my_matrix_create_array(my_matrix_t **arr, char *common_name, \
                                const uint32_t count, ...);
void my_matrix_print_array(my_matrix_t **arr, uint32_t size);
void my_matrix_fill_from_array(my_matrix_t *A, double *arr, uint32_t arr_size);
void my_matrix_addcol_2(my_matrix_t *A, uint32_t const n);
void my_matrix_addrow_2(my_matrix_t *A, uint32_t const n);
void my_matrix_applyfunc_2(my_matrix_t *A, temp_func func);
void my_matrix_broadcasting_2(my_matrix_t *A, uint32_t m, \
    uint32_t n);
void my_matrix_inverse_2(my_matrix_t *A);
void my_matrix_one_2(my_matrix_t *A);
void my_matrix_powerint_2(my_matrix_t *A, uint32_t const n);
void my_matrix_addscalar_2(my_matrix_t *A, double scalar);
void my_matrix_sumcol_2(my_matrix_t *A);
void my_matrix_sumrow_2(my_matrix_t *A);
void my_matrix_swapcol_2(my_matrix_t *A, uint32_t const a, \
    uint32_t const b);
void my_matrix_swaprow_2(my_matrix_t *A, uint32_t const a, \
    uint32_t const b);
void my_matrix_multiplybyscalar_2(my_matrix_t *A, double scalar);
void my_matrix_transpose_2(my_matrix_t *A);
double my_matrix_det(my_matrix_t *A);
void my_matrix_copy_array(my_matrix_t **arr, my_matrix_t **copy,\
                                    uint32_t size, char *common_name);
uint32_t my_matrix_find_col_index(my_matrix_t *A, uint32_t m,  double x);
uint32_t my_matrix_find_row_index(my_matrix_t *A, uint32_t n,  double x);
void my_matrix_linspace(my_matrix_t *m, double start,\
                                double stop, uint32_t num);
void my_matrix_setall(my_matrix_t *A, double const  x);
void my_matrix_transform(my_matrix_t *A, uint32_t m,\
                            uint32_t n, my_matrix_t *result);
void my_matrix_ravel(my_matrix_t *A, my_matrix_t *result);
void my_matrix_transform_2(my_matrix_t *A, uint32_t m, uint32_t n);
void my_matrix_ravel_2(my_matrix_t *A);
void my_matrix_meshgrid(my_matrix_t *x, my_matrix_t *y,\
                            my_matrix_t *xx, my_matrix_t *yy);
void my_matrix_meshgrid_2(my_matrix_t *x, my_matrix_t *y);
void my_matrix_to_array(my_matrix_t *A, double **arr);

#ifdef MY_MAT_IMPLEMENTATION

void my_matrix_addcol(my_matrix_t *A, uint32_t const n, my_matrix_t *result)
{
    uint32_t j2 = 0;

    if (n > A->n) return;
    my_matrix_create(A->m, A->n + 1, 1, result);
    for (uint32_t j = 0; j < result->n; j++) {
        if (j == n) continue;
        uint32_t i2 = 0;
        for (uint32_t i = 0; i < result->m; i++) {
            result->arr[i][j] = A->arr[i2][j2];
            i2++;
        }
        j2++;
    }
}

void my_matrix_addcol_2(my_matrix_t *A, uint32_t const n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_addcol(&cpy, n, A);
    MAT_FREE(cpy);
}

void my_matrix_addrow(my_matrix_t *A, uint32_t const m, my_matrix_t *result)
{
    uint32_t i2 = 0;

    if (m > A->m) return;
    my_matrix_create(A->m + 1, A->n, 1, result);

    for (uint32_t i = 0; i < result->m; i++) {
        if (i == m) continue;
        uint32_t j2 = 0;
        for (uint32_t j = 0; j < result->n; j++) {
            result->arr[i][j] = A->arr[i2][j2];
            j2++;
        }
        i2++;
    }
}

void my_matrix_addrow_2(my_matrix_t *A, uint32_t const n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_addrow(&cpy, n, A);
    MAT_FREE(cpy);
}

static my_bool_t add_is_valid(va_list args, uint32_t const count)
{
    my_matrix_t *A = va_arg(args, my_matrix_t *);
    uint32_t baseM = A->m;
    uint32_t baseN = A->n;
    for (uint32_t i = 0; i < count - 1; i++) {
        A = va_arg(args, my_matrix_t *);
        if ((A->m != baseM && A->m != 1) || (A->n != baseN && A->n != 1))
            return my_false;
        }
    return my_true;
}
static void add(my_matrix_t *result, my_matrix_t *A)
{
    MAT_DECLA(tmp);
    my_matrix_broadcasting(A, result->m, result->n, &tmp);
    for (uint32_t i = 0; i < result->m; i++) {
        for (uint32_t j = 0; j < result->n; j++) {
            result->arr[i][j] += tmp.arr[i][j];
        }
    }
    MAT_FREE(tmp);
}

void my_matrix_add(my_matrix_t *result, uint32_t const count, ...)
{
    va_list args;
    va_list args_copy;
    va_copy(args_copy, args);
    va_start(args_copy, count);
    if (add_is_valid(args_copy, count) == FALSE) {
        va_end(args_copy);
        return;
    }
    va_end(args_copy);
    va_start(args, count);
    my_matrix_t *A = va_arg(args, my_matrix_t *);
    my_matrix_create(A->m, A->n, 1, result);
    my_matrix_copy(A, result);
    for (uint32_t i = 0; i < (count - 1); i++) {
        A = va_arg(args, my_matrix_t *);
        add(result, A);
    }
    va_end(args);
}

void my_matrix_applyfunc(my_matrix_t *A, temp_func func, my_matrix_t *result)
{
    my_matrix_copy(A, result);

    for (uint32_t i = 0; i < result->m; i++) {
        for (uint32_t j = 0; j < result->n; j++) {
            my_matrix_set(result, i, j, func(result->arr[i][j]));
        }
    }
}

void my_matrix_applyfunc_2(my_matrix_t *A, temp_func func)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_applyfunc(&cpy, func, A);
    MAT_FREE(cpy);
}

void my_matrix_broadcasting(my_matrix_t *A, uint32_t m, \
    uint32_t n, my_matrix_t *result)
{
    if (A->m > 1 && m > A->m) m = A->m;
    if (A->n > 1 && n > A->n) n = A->n;
    my_matrix_create(m, n, 1, result);
    if (A->m == 1 && A->n == 1) {
        my_matrix_addscalar_2(result, A->arr[0][0]);
        return;
    }
    if (A->m == 1 && A->n != 1)
        for (uint32_t i = 0; i < A->n; i++)
            my_matrix_setcol(result, i, A->arr[0][i]);
    if (A->n == 1 && A->m != 1)
        for (uint32_t i = 0; i < A->m; i++)
            my_matrix_setrow(result, i, A->arr[i][0]);
    if (A->m != 1 && A->n != 1)
        my_matrix_copy(A, result);
}

void my_matrix_broadcasting_2(my_matrix_t *A, uint32_t m, \
    uint32_t n)
{
    MAT_DECLA(cpy);
    my_matrix_copy(A, &cpy);
    my_matrix_broadcasting(&cpy, m, n, A);
    MAT_FREE(cpy);
}

void my_matrix_concatcol(my_matrix_t *result, my_matrix_t *A, my_matrix_t *B)
{
    if (A->m != B->m) return;
    my_matrix_create(A->m, A->n + B->n, 1, result);

    for (uint32_t i = 0; i < result->m; i++) {
        for (uint32_t j = 0; j < A->n; j++) {
            result->arr[i][j] = A->arr[i][j];
        }
        for (uint32_t j = A->n; j < result->n; j++) {
            result->arr[i][j] = B->arr[i][j - A->n];
        }
    }
}

void my_matrix_concatrow(my_matrix_t *result, my_matrix_t *A, my_matrix_t *B)
{
    if (A->n != B->n) return;
    my_matrix_create(A->m + B->m, A->n, 1, result);
    for (uint32_t i = 0; i < result->n; i++) {
        for (uint32_t j = 0; j < A->m; j++) {
            result->arr[j][i] = A->arr[j][i];
        }
        for (uint32_t j = A->m; j < result->m; j++) {
            result->arr[j][i] = B->arr[j - A->m][i];
        }
    }
}

void my_matrix_copy(my_matrix_t *A, my_matrix_t *copy)
{
    my_matrix_create(A->m, A->n, 1, copy);
    for (uint32_t i = 0; i < A->m; i++) {
        for (uint32_t j = 0; j < A->n; j++) {
            my_matrix_set(copy, i, j, A->arr[i][j]);
        }
    }
}

void my_matrix_copy_array(my_matrix_t **arr, my_matrix_t **copy,\
                                    uint32_t size, char *common_name)
{
    *copy = malloc(size * sizeof(my_matrix_t));
    check_alloc(*copy);
    for (uint32_t i = 0; i < size; ++i) {
        (*copy)[i].m = 0;
        (*copy)[i].n = 0;
        my_matrix_copy(&((*arr)[i]), &((*copy)[i]));
        (*copy)[i].name = init_str(common_name, i);
    }
}

static void create(my_matrix_t *A, uint32_t m, uint32_t n)
{
    A->m = m;
    A->n = n;
    A->arr = malloc(m * sizeof(double *));
    check_alloc(A->arr);
    for (uint32_t i = 0; i < m; i++) {
        A->arr[i] = calloc(n, sizeof(double));
        check_alloc(A->arr[i]);
    }
}

void my_matrix_create(uint32_t m, uint32_t n, \
    uint32_t const count, ...)
{
    va_list args;
    va_start(args, count);
    for (uint32_t i = 0; i < count; i++) {
        my_matrix_t *A = va_arg(args, my_matrix_t *);
        MAT_FREE((*A));
        create(A, m, n);
    }
    va_end(args);
}

void my_matrix_create_array(my_matrix_t **arr, char *common_name, \
                                const uint32_t count, ...)
{
    *arr = malloc(count * sizeof(my_matrix_t));
    if (*arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }
    va_list args;
    va_start(args, count);
    for (size_t i = 1; i <= count; i++) {
        my_matrix_t *A = &((*arr)[i - 1]);
        uint32_t m = va_arg(args, int);
        uint32_t n = va_arg(args, int);
        create(A, m, n);
        A->name = init_str(common_name, i);
    }
    va_end(args);
}

#endif

#ifdef MATRIX_INIT_STR

static inline __attribute__((always_inline)) char *init_str(char *str, int i)
{
    size_t ite = (size_t)log10(i == 0 ? 1 : i) + 1;
    char *m_str = malloc(strlen(str) + 1 + ite);
    if (m_str == NULL) {
        fprintf(stderr, "Memory Allocation Failed!");
        exit(1);
    }
    strcpy(m_str, str);
    m_str[strlen(str) + ite] = '\0';
    for (size_t j = 1; j <= ite; ++j) {
        m_str[strlen(str) + ite - j] = 48 + i % 10;
        i = (i - i % 10) / 10;
    }
    return m_str;
}

#endif

#ifdef MATRIX_CHECK_ALLOC
static inline __attribute__((always_inline)) void check_alloc(void *A)
{
    if (A == NULL) {
        fprintf(stderr, "Memory allocation failed!");
        exit(1);
    }
}
#endif

#endif