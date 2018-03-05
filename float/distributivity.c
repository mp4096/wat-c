#include <stdio.h>
#include <math.h>

float foo(float a, float b, float c) {
    return a * (b + c);
}

float bar(float a, float b, float c) {
    return a * b + a * c;
}

int main(void) {
    float x = 1.0e-38f;
    float y = 2.0e38f;
    float z = 2.0e38f;

    printf("%f\n", foo(x, y, z));
    printf("%f\n", bar(x, y, z));
}
