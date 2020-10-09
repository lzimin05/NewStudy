#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int a[], int size) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < size; i++) {
	a[i] = rand() % 40 + 10;
    }
}

void printArray(int a[], int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
	if(i == size -1) {
	    printf("%i", a[i]);
	} else {
	    printf("%i, ", a[i]);
	}
    }
    printf("]\n");
}

void printArray2(int* a[], int* b[], int* c[], int size) {
    for(int i = 0; i < size; i++) {
	printf("[");
	for(int g = 0; g < size; g++) {
	    c[i][g] = a[i][g] + b[i][g];
	    if(g == size - 1) {
		printf("%i", c[i][g]);
	    } else {
		printf("%i, ", c[i][g]);
	    }
	}
	printf("]\n");
    }
}

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);
    int* a[size]; 
    int* b[size];
    int* c[size];
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
	c[i] = (int*) malloc(sizeof(int) * size);
	fill(a[i], size);
   	printArray(a[i], size);
    }
    printf("\n\n");
    for(int i = 0; i < size; i++) {
	b[i] = (int*) malloc(sizeof(int) * size);
	fill(b[i], size);
   	printArray(b[i], size);
    }
    printf("\n\n");
    printArray2(a, b, c, size);
    return 0;
}
