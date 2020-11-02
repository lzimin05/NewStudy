#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int** a, int size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    a[i][g] = rand() % 9 + 1;
   	}
    }
}

void printArray(int** a, int size) {
    for(int  i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    printf("%i  ", a[i][g]);
  	}
        printf("\n\n");
    }
}

int modulus_of_values(int** a, int size) {
    int max = 0;
    int n = 0;
    for(int i = 0; i < size; i++) {
	int sum = 0;
	for(int g = 0; g < size; g++) {
	    sum = sum + a[i][g];
	    if(max < sum) {
		max = sum;
		n = i;
	    }
	}
    }
    //printf("\n%i\n", n+1);
    return n;
}

int max_number_on_line(int** a, int size, int n) {
    int max = 0;
    int n1 = 0;
    for(int i = 0; i < size; i++) {
	if(max < a[n][i]) {
	    max = a[n][i];
  	    n1 = i;
	}
    } 
    //printf("\n%i\n", n1+1);
    return n1;
}

void flip_horiz(int** a, int size, int n) {
    for(int i = 0; i < size; i++) {
	int c = a[n][i];
     	a[n][i] = a[size-1][i];
	a[size-1][i] = c;
    }
}

void flip_vert(int** a, int size, int n) {
    for(int  i = 0; i < size; i++) {
	int c = a[i][n];
	a[i][n] = a[i][size-1];
	a[i][size-1] = c;
    }
}

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);
    int** a = (int**) malloc(sizeof(int)*size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int)*size);
    }
    fillArray(a, size);
    printArray(a, size);
    printf("\n\n\n");
    int g1 = modulus_of_values(a, size); 
    int i1 = max_number_on_line(a, size, g1);
    flip_horiz(a, size, g1);
    flip_vert(a, size, i1);
    printArray(a, size);
    return 0;
}
