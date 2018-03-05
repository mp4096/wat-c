#include <stdio.h>
#include <stdint.h>

int32_t foo(int32_t a) {
    return (a + a) / 2;
}

int main(void) {
    printf("%i\n", foo(1));
    printf("%i\n", foo(INT32_MIN));
    printf("%i\n", foo(INT32_MAX));
}
