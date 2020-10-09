#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    for(int i = 0; i < size; i++) {
	if ((i + 2) % 2 == 0) {
	    for(int g = 0; g < size; g++) {
		if(g == i && g == size -1) {		
		    printf("%i", a[g][i]);
		} else {
		    printf("%i, ", a[g][i]);
		}
	    }
	} else {
	    for(int g = size-1; g >= 0; g--) {
		if(g == 0 && i == size -1) {
		    printf("%i", a[g][i]);
		} else {
		    printf("%i, ", a[g][i]);
		}
	    }
	}
    }
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
