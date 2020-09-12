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

// 1 2 3 4 5 6 7
// 7 6 5 4 3 2 1
void reverse(int a[], int size) {
	for(int i = 0; i < size/2; i++) {
		int c = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = c;
	}
}

int main(int argc, char** argv) {

	int n;
	scanf("%i", &n);
	
	int* a = (int*) malloc(sizeof(int) * n);
	fill(a, n);
	printArray(a, n);
	reverse(a, n);
	printArray(a, n);
	
	free(a);
	return 0;
}