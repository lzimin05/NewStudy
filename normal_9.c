#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {

    int a, b;
    scanf("%i %i", &a, &b);
    if(a >= b) {
  	printf("Error!!!\n");
	return 1;
    }
    srand(time(NULL));
    int size = 10;
    int c[size][size];
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    c[i][g] = rand() % (b-a) + a;
	    printf("%i ", c[i][g]);
	}
	printf("\n");
    }
    return 0;
}
