#include <stdio.h>

int main(int argc, char** argv) {
    int n, sum;
    sum = 0;
    scanf("%i", &n);
    while(n != 0) {
	if(n % 5 == 0) {
	    sum = sum + n;
	}
	n--;
    }
    printf("%i\n", sum);
    return 0;
}
