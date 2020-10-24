#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int** a, int size) {
    srand(time(NULL)*(int) a);
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
 	    if(g == size - 1) {
		printf("%i]\n", a[i][g]);
 	    } else {
	    	printf("%i, ", a[i][g]);
	    }
  	}
    }
}

void printArray2(int** a, int size) {
    int sit = 1; //направление
    for(int i = 0; i < 1; i++) {
	for(int g = 0; g < size; g++) {
	    int i1 = i;
	    int g1 = g;
	    int exit = 0; //когда выходить из программы
	    if(sit == 1) {
	    	do {
		    printf("%i, ", a[i1][g1]);
		    if(g1 == 0) {
		    	exit = 1;
			sit = 2;
	  	    } else {
		    	g1--;
		    	i1++;
		    }
	        } while(exit != 1);
	    } else {
		do {
		    printf("%i, ", a[g1][i1]);
		    if(g1 == 0) {
			exit = 1;
			sit = 1;
		    } else {
			g1--;
			i1++;
		    }
		} while(exit != 1);
	    }
	}
    }
    for(int diag = 0; diag < size; diag++) {
	if(diag % 2 == 0) {
	    int i = diag;
	    int g = size-1;
	    while (i <= size-1) {
		printf("%i, ", a[i][g]);
		i++;
		g--;
	    }
	} else {
	    int i = size-1;
	    int g = diag;
	    while (g <= size-1) {
		printf("%i, ", a[i][g]);
		i--;
		g++;
	    }
	}
    }
}

int main(int argc, char** argv) {
    int size;
    scanf("%i", &size);
    int** a = (int**) malloc(sizeof(int) *size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
    }
    fillArray(a, size);
    printArray(a, size);
    printf("\n\n");
    printArray2(a, size);
    return 0;
}
