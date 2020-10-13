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

int mode(int a) {
    if(a < 0) {
	return -1*a;
    }
    return a;
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
    for(int i = 0; i < 1; i++) {
    printf("[");
	for(int g = size-1; g >= 0; g--) {
	    int n = 0;
 	    int c = g;
	    while(c <= size-1) {	 	
		printf("%i, ", a[c][i+n]);
		n++;
		c++;
	    }
	}
    }
    
    for(int i = 0; i < 1; i++) {	//столбик
 	for(int g = 1; g < size-1; g++) {	//строчка
	    int n = 0;
	    int c = g;
	    while(c <= size-1) {
		printf("%i, ", a[i+n][c]);
	        n++;
		c++;
	    }
	}
    }
    printf("%i]\n", a[0][size-1]);
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
