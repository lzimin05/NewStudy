#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** fillArray(int** a, int size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    a[i][g] = rand() % 100;
	}
    }
    return a;
}

void printArray(int** a, int size) {
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    printf("%3i ", a[i][g]);
	}
	printf("\n");
    }
}



int main(int argc, char** argv) {
    int size;
    scanf("%i", &size);
    int** a = (int**) malloc(sizeof(int)*size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int)*size);
    }
    a = fillArray(a, size);
    printArray(a, size);
    
    int min = 101;
    int i_min = -1;
    int g_min = -1;
    for(int i = 0; i < size; i++) { //столбец
	for(int g = 0; g < size; g++) { //строчка
	    if(i > g && a[i][g] < min) {
		min = a[i][g];
 		i_min = i;
		g_min = g;
	    }
	}
    }
    //printf("%i = a[%i][%i]\n", min, i_min+1, g_min+1);

    int max = -1;
    int i_max = -1;
    int g_max = -1;
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {
	    if(i > g && a[i][g] > max) {
		max = a[i][g];
		i_max = i;
		g_max = g;
	    }
  	}
    }
    //printf("%i = a[%i][%i]\n", max, i_max+1, g_max+1);
    int c = a[i_max][g_max];
    a[i_max][g_max] = a[i_min][g_min];
    a[i_min][g_min] = c;
    printf("\n\n");
    printArray(a, size);
    return 0;
}
