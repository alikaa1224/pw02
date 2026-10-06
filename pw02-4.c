//nano pw02-4.c

#include <stdio.h>
#include <limits.h>
int main(void) {
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    int range_ok = ((unsigned int)INT_MAX * 2u + 1u == UINT_MAX);
    printf("RANGE_OK: %d\n", range_ok);
    return 0;
}

//gcc pw02-4.c -o pw02-4
//./pw02-4
