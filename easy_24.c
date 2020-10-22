#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    int n;
    scanf("%i", &n);
    float sum = 0;
    float sum1;
    int p;
    for(int i = 1; i <= n; i++) {
	sum1 = 0;
	p = 1;
	while(p <= i) {
	    sum1 = sum1 + sin(p*M_PI/180);
	    p++;
	}
	sum = sum+1./sum1;
    }
    printf("%f\n", sum);
    return 0;
}
