#include <stdio.h>

int main(int argc, char** argv) {

    float n;
    scanf("%f", &n);
    int n1 = n;
    if (n == n1) {
	printf("Целое число\n");
    } else {
	printf("Дробное число\n");
    }

    return 0;
}
