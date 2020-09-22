#include <stdio.h>

int main(int argc, char** argv) {

    int N, D, R;
    scanf("%i %i %i", &N, &D, &R);
    if (N % D == R) {
	printf("True\n");
    } else {
  	printf("False\n");
    }

    return 0;
}
