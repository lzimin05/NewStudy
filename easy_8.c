#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    for(float x = -1.1; x <= 0.3; x = x + 0.2) {
	float z;
	for(int m = 1; m <= 5; m++) {
	    z = pow(x, m) * powl(sin(x*m), m);
	    printf("z = %lf| m = %i\n", z, m);
	}
	printf("x = %f\n\n", x);
    }

    return 0;
}
