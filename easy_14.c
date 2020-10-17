#include <stdio.h>

int main(int argc, char** argv) {
    char a;
    int sum = 0;
    do {
	scanf("%c", &a);
	if (a == '\n') {
	    sum++;
	}
    } while (a != '#');

    printf("sum = %i\n", sum);

    return 0;
}
