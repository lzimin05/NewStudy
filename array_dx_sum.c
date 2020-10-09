#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int** a, int h1, int h2) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < h1; i++) {
	for(int g = 0; g < h2; g++) {
	    a[i][g] = rand() % 40 + 10;
	}
    }
}

void printArray(int** a, int h1, int h2) {
    for(int i = 0; i < h1; i++) {
	 printf("[");
	for(int g = 0; g < h2; g++) {
	    if(g == h2-1) {
		printf("%i", a[i][g]);
	    } else {
	   	printf("%i, ", a[i][g]);
	    }
	}
	printf("]\n");	
    }
    printf("\n\n");
}

void printArray2(int** a, int** b, int** c, int h1, int h2) {
    printf("[");
    for(int i = 0; i < h1; i++) {
	for(int g = 0; g < h2; g++) {
	    c[i][g] = a[i][g] + b[i][g];
	    if (i == h1 -1 && g == h2 -1) {
		printf("%i]\n", c[i][g]);
	    } else {
		printf("%i, ", c[i][g]);
	    }
	}
    }

}

int main(int argc, char** argv) {

    int h1, h2;
    scanf("%i %i", &h1, &h2);
    int** a = (int**) malloc(sizeof(int)*h1*h2);
    int** b = (int**) malloc(sizeof(int)*h1*h2); 
    int** c = (int**) malloc(sizeof(int)*h1*h2); 

    for(int i = 0; i < h2; i++) {
	a[i] = (int*) malloc(sizeof(int)*h2);
	b[i] = (int*) malloc(sizeof(int)*h2);
	c[i] = (int*) malloc(sizeof(int)*h2);
    }
    fill(a, h1, h2);
    fill(b, h1, h2);
    printArray(a, h1, h2);
    printArray(b, h1, h2);
    printArray2(a, b, c, h1, h2);

    return 0;
}
