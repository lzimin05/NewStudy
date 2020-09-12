#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fill(int a[], int size){
	srand(time(NULL) * (int) a);
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1;
	}
}

void printArray(int a[], int size) {
	printf("[");
	for(int i = 0; i < size; i++) {
		if (i == size - 1) {
			printf("%i", a[i]);
		} else {
			printf("%i, ", a[i]);
		}
 	}
	printf("]\n");
}

// A:  1 2 3
// B:  4 5 6
//     1 2 3 4 5 6

void merge(int a[], int b[], int c[], int size) {

	for(int i = 0; i < 2*size; i++) {
		if (size <= i) {
			c[i] = b[i - size];
		} else {
			c[i] = a[i];
		}
	}
}


int main(int argc, char** argv) {

	int n;
	scanf("%i", &n);
	
	int* a = (int*) malloc(sizeof(int) * n);
	int* b = (int*) malloc(sizeof(int) * n);
	int* c = (int*) malloc(sizeof(int) * 2*n);
	fill(a, n);
	printArray(a, n);
	fill(b, n);
	printArray(b, n);
	merge(a, b, c, n);
	printArray(c, 2 * n);
	
	free(a);
	free(b);
	free(c);
	return 0;
}