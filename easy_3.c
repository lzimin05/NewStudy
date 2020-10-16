#include <stdio.h>

int main(int argc, char** argv) {
    printf("Enter number --> ");
    int n;
    scanf("%i", &n);
    if (n > 99 || n < 10) {
	printf("Error!!!\n");
	return 1;
    }
    if (n / 10 > n % 10) {
	printf("max: %i\nmin: %i\n", n / 10, n % 10);
    } else {
 	printf("max: %i\nmin: %i\n", n % 10, n / 10);
    }
}
