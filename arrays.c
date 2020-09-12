#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArray(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
}

int main(int argc, char** argv) {

	int n;
	scanf("%i", &n);
	
	int* a = (int*) malloc(sizeof(int) * n);
	
	srand(time(NULL));
	
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100 + 1;
	}
	
	printArray(a, n);
	
	free(a);
	return 0;
}