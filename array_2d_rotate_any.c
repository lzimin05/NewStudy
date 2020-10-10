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
	    if(g == size -1) {
		printf("%i]\n", a[i][g]);
	    } else {
		printf("%i, ", a[i][g]);
	    }
	}
    }
}

void rotate(int** a, int** b,int size) {
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    b[i][g] = a[size-g-1][i];
	}
    }
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    a[i][g] = b[i][g];
	}
    }
}

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);
    int** a = (int**) malloc(sizeof(int) * size*size);
    int** b = (int**) malloc(sizeof(int) * size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
 	b[i] = (int*) malloc(sizeof(int) * size);
    }
    fill(a, size);
    printArray(a, size);
    int rot;
    scanf("%i", &rot);
    printf("\n\n");
    if (rot % 90 != 0) {
	printf("Error");	
   	return 1;
    }
    if (rot == 0 && rot % 360 != 0) {
    } else {
	rot = rot / 90;
        for(int i = 0; i < rot; i++) {    	
	    rotate(a, b, size);
	}
    }
    printArray(a, size);
   
    free(a);
    free(b);
    return 0;
}
