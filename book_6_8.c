#include <stdio.h>

int main(int argc, char** argv) {

    int a, b;
    scanf("%i %i", &a, &b);

    if(a < 0 && b >= 0 || a >= 0 && b < 0) {
	printf("True\n");
    } else {
	printf("False\n");
    }

    return 0;
}
