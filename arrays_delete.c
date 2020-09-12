#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int a[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1; 
	}
}

void printArray(int a[], int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		if (i == size - 1) {
			printf("%i", a[i]);
		} else {
			printf("%i, ", a[i]);
		}
	}
	printf("]\n");
}

void removeArray(int a[], int size, int k) {
	for (int i = k; i + 1 < size; i++) {
		a[i] = a[i + 1];
	}
}

// [1 2 3 4 5 6 7 8 9]
//            ^
// [1 2 3 4 5 7 8 9 #] # #

// 1 2 3 4 5
// 1 2 3 5 # # # #

int main(int argc, char** argv) {

	int n, k;
	scanf("%i %i", &n, &k);
 	int* a = (int*) malloc(sizeof(int) * n);
	
	fill(a, n);
	printArray(a, n);
	removeArray(a, n, k);
	printArray(a, n - 1);
	
	free(a);
	return 0;
}