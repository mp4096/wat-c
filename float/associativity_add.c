#include <stdio.h>

float foo(float a, float b, float c) {
    return (a + b) + c;
}

float bar(float a, float b, float c) {
    return a + (b + c);
}

int main(void) {
    float x = 2.0e38f;
    float y = 2.0e38f;
    float z = -2.0e38f;

    printf("%e\n", foo(x, y, z));
    printf("%e\n", bar(x, y, z));
}
