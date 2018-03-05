#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool foo(float a) {
    return a <= (a + 1.0f);
}

int main(void) {
    float a = NAN;

    if (foo(a)) {
        printf("a <= a + 1.0\n");
    } else {
        printf("a > a + 1.0\n");
    }
}
