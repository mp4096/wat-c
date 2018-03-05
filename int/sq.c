#include <stdio.h>
#include <stdint.h>

int32_t sq(int32_t a) {
    return a * a;
}

int main(void) {
    int32_t a = INT32_MAX;

    printf("%i\n", sq(a));
}
