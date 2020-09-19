#include <stdio.h>

int main(int argc, char** argv) {

    float a, b;
    scanf("%f %f", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%.2f %.2f\n", a, b);

    return 0;
}
