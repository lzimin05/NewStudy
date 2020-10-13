#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int** a, int size) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < size; i++) {
 	for(int g = 0; g < size; g++) {
	    a[i][g] = rand() % 90 + 10;
 	}
    }
}

void printArray(int** a, int size) {
    for(int i = 0; i < size; i++) {
	printf("[");
	for(int g = 0; g < size; g++) {
	    if(g == size-1) {
		printf("%i", a[i][g]);
	    } else {
		printf("%i, ", a[i][g]);
	    }
	}
	printf("]\n");
    }
    printf("\n");
}

void printArray2(int** a, int size) {
    for(int i = 0; i < size; i++) { //столбик
	for(int g = 0; g < size/2; g++) { //строчка
	    //printf("a[%i][%i] = %i; ", i, g, a[size-i-1][g]);
      	    int c = a[i][g];
	    a[i][g] = a[i][size-g-1];
	    a[i][size-g-1] = c;
 	}
  	printf("\n");
    }
    printArray(a, size);
}

int main(int argc, char** argv) {
	
    int size;
    scanf("%i", &size);

    int** a = (int**) malloc(sizeof(int) * size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size); 
    }
    fill(a, size);
    printArray(a, size);
    printArray2(a, size);       

    return 0;
}
