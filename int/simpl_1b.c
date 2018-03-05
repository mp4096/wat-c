#include <stdio.h>
#include <stdint.h>

int32_t foo(int32_t a) {
    return (9 * a) / 3 - (a + a + a);
}

int main(void) {
    printf("%i\n", foo(INT32_MIN));
    printf("%i\n", foo(INT32_MAX));
    printf("%i\n", foo(1));
}
