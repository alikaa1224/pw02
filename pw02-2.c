//nano pw02-2.c

#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    bool module_ready = num1;
    bool fault_state = num2;
    int flags_sum = module_ready + fault_state;
    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", flags_sum);
    return 0;
}

//gcc pw02-2.c -o pw02-2
//./pw02-2
