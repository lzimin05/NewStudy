#include <stdio.h>

int main(int argc, char** argv) {

    int a, b, max;
    scanf("%i %i %i", &a, &b, &max);
    
    if (a > b && a == max || b > a && b == max) {
	printf("True\n");
    } else {
	printf("False\n");
    }
    return 0;
}
