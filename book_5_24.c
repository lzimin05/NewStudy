#include <stdio.h>

int main(int argc, char** argv) {

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);

    a = a + b;
    b = a - b;
    a = a - b;
    b = b + c;
    c = b - c;
    b = b - c;
    printf("%i %i %i\n", a, b, c);

    return 0;
}
