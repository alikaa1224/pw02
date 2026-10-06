//mkdir pw02 && cd pw02
//nano pw02-1.c

#include <stdio.h>
int main(void) {
    int id;
    int version;
    int status;
    scanf("%d %x %o", &id, &version, &status);
    int sum = id + version + status;
    printf("UNIT_ID: %d\n", id);
    printf("UNIT_VERSION: %d\n", version);
    printf("UNIT_STATUS: %d\n", status);
    printf("SUM: %d\n", sum);
    return 0;
}

//компиляция - gcc pw02-1.c -o pw02-1
//запуск - ./pw02-1
