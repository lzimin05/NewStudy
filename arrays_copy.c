#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fill(int a[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1; 
	}
}

void printArray(int a[], int size) {
	// [1, 2, 3, 4, 5, 6]
	printf("[");
	for (int i = 0; i < size; i++) {
		if (i == size -1) {
			printf("%i", a[i]); 
		} else {
			printf("%i, ", a[i]);
		}
	}
	printf("]\n");
}

void copy(int a[], int b[], int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
}

int main(int argc, char** argv) {

	int n;
	scanf("%i", &n);
	
	int* a = (int*) malloc(sizeof(int) * n);
	int* b = (int*) malloc(sizeof(int) * n);
	
	fill(a, n);
	printArray(a, n);
	copy(a, b, n);
	printArray(b, n);
	
	free(a);
	free(b);
	return 0;
}