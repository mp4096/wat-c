#include <stdio.h>
#include <math.h>

float foo(float a) {
    return a - a;
}

int main(void) {
    printf("%f\n", foo(1.0f));
    printf("%f\n", foo(NAN));
    printf("%f\n", foo(INFINITY));
}
