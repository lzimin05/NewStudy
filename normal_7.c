#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char** argv) {
    printf("Enter x --> ");
    float x;
    scanf("%f", &x);
    int size = 1;
    float y[size];
    y[0] = x;
    while(true) {
	y[size] = 0.5 * (y[size-1] + 3 * x / (2 * y[size-1] * y[size-1] + x / y[size-1]));
	if(abs(y[size] - y[size-1]) < pow(10, -5)) {
	    break;
	}
	y[size-1] = y[size];
    } 
    printf("%.2f\n", y[size-1]);
    return 0;
}
//yi+1= 0.5 ( yi + 3 x / ( 2 yi2 + x / yi )).


