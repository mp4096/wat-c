#include <stdio.h>
#include <stdint.h>

int main(void) {
    int32_t a = INT32_MAX;

    if (a < (a + 1)) {
        printf("a < a + 1\n");
    } else {
        printf("a >= a + 1\n");
    }
}
