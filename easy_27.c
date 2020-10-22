#include <stdio.h>

int main(int argc, char** argv) {
    int n;
    scanf("%i", &n);
    printf("	Таблица умножения чила: %i\n", n);
    for(int i = 1; i <= 10; i++) {
	printf("%2.i * %2.i = %i\n", i, n, i*n);
    }
    return 0;
}
