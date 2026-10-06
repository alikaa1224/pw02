//nano pw02-8.c

#include <stdio.h>
#include <float.h>
int main(void) {
    printf("FLOAT: size=%zu, digits=%d, max=%e\n",
           sizeof(float), FLT_DIG, FLT_MAX);
    printf("DOUBLE: size=%zu, digits=%d, max=%e\n",
           sizeof(double), DBL_DIG, DBL_MAX);
    printf("LDOUBLE: size=%zu, digits=%d, max=%Le\n",
           sizeof(long double), LDBL_DIG, LDBL_MAX);
    return 0;
}

//gcc pw02-8.c -o pw02-8
// ./pw02-8
