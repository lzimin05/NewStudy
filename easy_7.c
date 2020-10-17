#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

    float x, y, z;
    printf("Enter x --> ");
    scanf("%f", &x);
    printf("Enter y --> ");
    scanf("%f", &y);
    printf("Enter z --> ");
    scanf("%f", &z);

    printf("You enter x: %f; y: %f; z: %f\nvector = %lf\n", x, y, z, sqrt(x*x+y*y+z*z));

    return 0;
}
