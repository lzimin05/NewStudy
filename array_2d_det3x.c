#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int** a, int size) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {	
	    a[i][g] = rand() % 90 + 10;
	}
    }
}

void printArray(int** a, int size) {
    for(int i = 0; i < size; i++) {
	printf("[");
	for(int g = 0; g < size; g++) {
	    if(g == size -1) {
		printf("%i]\n", a[i][g]);
	    } else {
		printf("%i, ", a[i][g]);
	    }
	}
    }
}

int main(int argc, char** argv) {

    int size = 3;
    int** a = (int**) malloc(sizeof(int) * size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
    }
    fill(a, size);
    printArray(a, size);
    printf("\n\n");
    //printf("%i\n", d);
    int det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
             -a[0][1] * (a[1][0] * a[2][2] + a[1][2] * a[2][0])
             +a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    printf("%i\n", det);
    for(int i = 0; i < size; i++) {
	free(a[i]);
    }
    free(a);
    return 0;
}
