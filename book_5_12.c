#include <stdio.h>

int main(int argc, char** argv) {

    float x, x1;
    scanf("%f", &x);
    x1 = x;
    x = (float) x1*x1*x1*x1*16 - x1*x1*x1*6 + x1*x1*4 - x+1;
    
    printf("%f\n", x);

    return 0;
}
