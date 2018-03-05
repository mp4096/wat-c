#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

bool foo(int32_t a) {
    return a < (a + 1);
}

int main(void) {
    int32_t a = INT32_MAX;

    if (foo(a)) {
        printf("a < a + 1\n");
    } else {
        printf("a >= a + 1\n");
    }
}
