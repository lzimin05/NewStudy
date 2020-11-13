#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void fillArray(int** a, int size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    a[i][g] = rand() % 9 + 1;
	}
    }
}
void printArray(int** a, int size) {
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    printf("%i ", a[i][g]);
	}
	printf("\n");
    }
}

int hidemax(int** a, int size, int g) {
    int max = 0;
    for(int i = 0; i < size; i++) {
	if(a[i][g] > a[max][g]) {
	    max = i;
	    //printf("%i - %i; %i\n", max, i, a[i][g]);
	}
    }
    return max;
}

int hidemin(int** a, int size, int  g) {
    int min = 0;
    for(int i = 0; i < size; i++) {
	if(a[i][g] < a[min][g]) {
	    min = i;
	}
    }
    return min;
}

bool proverka1(int** a, int size, int max, int min, int g) {
    //max
    if(g-1 >= 0 && a[max][g] == a[max][g-1]) {
	return false;
    }
    if(g + 1 <= size-1 && a[max][g] == a[max][g+1]) {
	return false;
    }
    //min
    if(g-1 >= 0 && a[min][g] == a[min][g-1]) {
	return false;
    }
    if(g + 1 <= size-1 && a[min][g] == a[min][g+1]) {
	return false;
    }
    return true;
}

void swapmax(int** a, int size, int g) {
    for(int i = 0; i < size; i++) {
	for(int i1 = 0; i1 < size; i1++) {
	    if(a[i][g] > a[i1][g] && i != g) {
		int c = a[i][g];
	   	a[i][g] = a[i1][g];
		a[i1][g] = c; 
	    }
	}
    }
}

void swapmin(int** a, int size, int g) {
    for(int i = 0; i < size; i++) {
	for(int i1 = 0; i1 < size; i1++) {
	    if(a[i][g] < a[i1][g] && i != g) {
		int c = a[i][g];
	   	a[i][g] = a[i1][g];
		a[i1][g] = c; 
	    }
	}
    }
}

int main(int argc, char** argv) {
    int size = 7;
    int** a = (int**) malloc(sizeof(int)*size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int)*size);
    }  
    fillArray(a, size);
    printArray(a, size); 

    for(int i = 0; i < size; i++) {
	int max = hidemax(a, size, i);
	int min = hidemin(a, size, i);
	//printf("\n%i %i\n", max, min);
	bool proverka = proverka1(a, size, max, min, i);
	if(proverka) {
	    printf("True %i\n", i);
	    if(max < min) { //от максимального к наименьшему
		swapmax(a, size, i);
	    } else {
		swapmin(a, size, i);
	    }
 	} else {
	    //printf("False\n");
	}
	
    }    
    printf("\n\n");
    printArray(a, size);
    return 0;
}
