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

void printArray2(int** a, int size) {
    for(int i = 0; i < size; i++) {
	printf("[");
	for(int g = 0; g < size; g++) {
	    if(g == size-1) {
		printf("%i]\n", a[g][i]);
	    } else {
		printf("%i, ", a[g][i]);
	    }
	}
    }
}

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);
    int** a = (int**) malloc(sizeof(int) * size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
    }
    fill(a, size);
    printArray(a, size);
    printf("\n\n");
    printArray2(a, size);
    return 0;
}
