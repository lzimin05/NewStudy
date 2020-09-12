#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int a[], int size) {
	srand(time(NULL));
	for(int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1;
	}
}

void printArray(int a[], int size) {
	printf("[");
	for(int i = 0; i < size; i++) {
		if(i == size - 1) {
			printf("%i", a[i]);
		} else {
			printf("%i, ", a[i]);
		}
	}
	printf("]\n");
}

int sum (int a[], int size) {
	int s = 0;
	for(int i = 0; i < size; i++) {
		s += a[i];
	}
	return s;
}

int main(int argc, char** argv) {

	int n;
	scanf("%i", &n);
	
	int* a = (int*) malloc(sizeof(int) * n);
	
	fill(a, n);
	printArray(a, n);
	
	int s = sum(a, n);
	printf("%i\n", s);
	free(a);
	return 0;
}