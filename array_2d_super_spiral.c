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
    if (size % 2 == 0) {
      	for(int i = 0; i < size/2; i++) {
	    printf("[");
	    for(int g = 0; g < size; g++) {
	   	if (g == size -1) {
		    printf("%i", a[i][g]);	
		} else {	
	   	    printf("%i, ", a[i][g]);
		}
	    }
	    printf("]\n[");
	    for(int g = size-1; g >= 0; g--) {	
		if (g == 0) {
		    printf("%i", a[size-i-1][g]);
		} else {	    	
		    printf("%i, ", a[size-i-1][g]);
		}
	    }
	    printf("]\n");
    	}
    } else {
	for(int i = 0; i < size/2; i++) {
	    printf("[");
	    for(int g = 0; g < size; g++) {
	   	if (g == size -1) {
		    printf("%i", a[i][g]);	
		} else {	
	   	    printf("%i, ", a[i][g]);
		}
	    }
	    printf("]\n[");
	    for(int g = size-1; g >= 0; g--) {	
		if (g == 0) {
		    printf("%i", a[size-i-1][g]);
		} else {	    	
		    printf("%i, ", a[size-i-1][g]);
		}
	    }
	    printf("]\n");
    	}
	printf("[");
	for(int i = 0; i < size; i++) {
	    if(i == size-1) {
		printf("%i]\n", a[size/2][i]);
	    } else {
	    	printf("%i, ", a[size/2][i]);
	    }
	}
    }
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
