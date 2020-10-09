#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void fill(int a[], int size) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < size; i++) {
	a[i] = rand() % 90 + 10;
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

void printArray2(int* a[], int size) {
    printf("[");
    int limit = 0;
    do {
	int i = limit; //столбец
	int g = limit; //строчка
	//	-->
	for(int g = limit; g < size-limit; g++) {
	    printf("%i, ", a[i][g]);
	}
	//	|
	//	v
	for(int i = limit+1; i < size-limit; i++) {
	    printf("%i, ",  a[i][size-g-1]);
	}
	//	<--
	for(int g = size-limit-2; g >= limit; g--) {
	    printf("%i, ", a[size-i-1][g]);
	}
	//	^
	//	|
	for(int i = size-limit-2; i >= limit+1; i--) {
	    printf("%i, ", a[i][g]);
	}
	limit++;
	if (limit == size) break;
    } while (true);
    printf("]\n");
}

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);
    int* a[size];
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
	fill(a[i], size);
   	printArray(a[i], size);
    }
    printf("\n\n");
    printArray2(a, size);
    return 0;
}
