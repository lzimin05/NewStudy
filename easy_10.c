#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

    float x, y;
    scanf("%f %f", &x, &y);
    x = x * M_PI / 180;
    y = y * M_PI / 180;
    //(1-tg x)^(ctg x)+ cos(x-y).
    printf("%f\n", pow(1 - tan(x), (cos(x) / sin(x))) + cos(x - y));

    return 0;
}
