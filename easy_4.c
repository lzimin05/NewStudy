#include <stdio.h>
#include <math.h>

#define g 9.8

int main(int argc, char** argv) {

    printf("Enter v --> ");
    int v;
    scanf("%i", &v);

    printf("Enter t --> ");
    int t;
    scanf("%i", &t);

    float a = asin(g*t/(2*v));
    printf("Ugol: %lf\n", 2*a*(90/M_PI));

    return 0;
}
