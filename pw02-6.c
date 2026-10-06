//nano pw02-6.c

#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint8_t val;
    scanf("%hhu", &val);
    uint8_t add_res = val + val;
    uint8_t mul_res = val * 2;
    uint8_t sqr_res = val * val;
    printf("ADD: %u\n", (unsigned int)add_res);
    printf("MUL2: %u\n", (unsigned int)mul_res);
    printf("SQR: %u\n", (unsigned int)sqr_res);
    return 0;
}
//gcc pw02-5.c -o pw02-6
//./pw02-6
