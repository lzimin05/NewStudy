#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

    float a, b;
    scanf("%f %f", &a, &b);
    if (a >= b) {
	printf("Error!!!\n");
	return 1;
    }
    for (a; a <= b; a = a + 0.01) {
	printf("%.2f\n", pow(cos(log(a))/sin(log(a)), 2) );
    }

    return 0;
}
