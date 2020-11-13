#include <stdio.h>
#include <math.h>

int number(int n) {
    int k;
    //int n1 = 0;
    scanf("%i", &k);
    while(1) {
	if(n > pow(10, k-1) && n < pow(10, k)) {
	    return n;
	}
	n = n / 10;
    }
}

int main(int argc, char** argv) {

    int n;
    scanf("%i", &n);
    int n1 = number(n);
    printf("%i\n", n1);
    return 0;
}
