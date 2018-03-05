#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

bool foo(int32_t a, int32_t b) {
    return (a + b) == (a - b);
}

int main(void) {
    int32_t a = INT32_MAX;
    int32_t b = INT32_MIN;

    if (foo(a, b)) {
        printf("(a + b) is equal to (a - b)\n");
    } else {
        printf("(a + b) is not equal to (a - b)\n");
    }
}
