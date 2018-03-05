#include <stdio.h>
#include <math.h>

int main(void) {
    float a = NAN;

    if (a == a) {
        printf("a is equal a\n");
    } else {
        printf("a is not equal a\n");
    }
}
