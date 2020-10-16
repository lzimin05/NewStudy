#include <stdio.h>

int main(int argc, char** argv) {

    int n, k;
    printf("Enter n --> ");
    scanf("%i", &n);
    printf("Enter k --> ");
    scanf("%i", &k);

    int sum = 1;

    for(int i = 0; i < k; i++) {
	sum = sum * n;
    }
    printf("%i\n", sum);

    return 0;
}
