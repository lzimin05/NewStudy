#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);

    int a[size];
    srand(time(NULL));
    int sum = 0;
    for(int i = 0; i < size; i++) {
	a[i] = rand() % 20 - 10;
	printf("%i ", a[i]);
	if (abs(a[i]) > 2.5) {
	    sum = sum +(a[i] * a[i]);
	}
	//printf("\n");
    }
    printf("sum = %i", sum);

    return 0;
}
