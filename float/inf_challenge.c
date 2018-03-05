#include <stdio.h>
#include <float.h>
#include <math.h>

float inverse(float a) {
    if (fabsf(a) > 0.0f) {
        return 1.0f / a;
    } else {
        return 42.0f;
    }
}

int main(void) {
    float a = 1.0e-40f;

    printf("%e\n", inverse(a));
}
