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

int find(int a[], int size, int k) {
	for (int i = 0; i < size; i++) {
		if (a[i] == k) {
			return i;
		}
	}
	return -1;
}

int main(int argc, char** argv) {

	int n, k;
	scanf("%i %i", &n, &k);
	
	int* a = (int*) malloc(sizeof(int) * n);
	
	fill(a, n);
	printArray(a, n);
	int i = find(a, n, k);
	printf("%i", i);
	free(a);
	return 0;
}