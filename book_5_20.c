#include <stdio.h>

int main(int argc, char** argv) {

    int b, a;
    scanf("%i", &a);
    b = a / 100 * 1 + a / 10 % 10 * 10 + a % 100 % 10 * 100;
   
    printf("%i\n", b);
    return 0;
}
