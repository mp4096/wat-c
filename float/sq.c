#include <stdbool.h>
#include <stdio.h>

bool positive(float a) {
    return a > 0.0f;
}

int square_is_positive(float a) {
    return (a * a) > 0.0f;
}

int main(void) {
    float a = 1.0e-23f;

    if (positive(a)) {
        printf("a > 0.0\n");
    } else {
        printf("a <= 0.0\n");
    }

    if (square_is_positive(a)) {
        printf("a * a > 0.0\n");
    } else {
        printf("a * a <= 0.0\n");
    }
}
