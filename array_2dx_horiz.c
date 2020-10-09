#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int** a, int h1, int h2) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < h1; i++) {
	for(int g = 0; g < h2; g++) {
	    a[i][g] = rand() % 90 + 10;
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
}

void printArray2(int** a, int h1, int h2) {
    printf("[");
    for(int i = 0; i < h1; i++) {
	if((i+2) % 2 == 0) {	
	    for(int g = 0; g < h2; g++) {
		if (i == h1-1 && g == h2-1) {
		    printf("%i]\n", a[i][g]);
		} else {		 
		    printf("%i, ", a[i][g]);
		}
	    }
	} else {
	    for(int g = h2-1; g >= 0; g--) {
		if (i == h1-1 && g == 0) {
		    printf("%i]\n", a[i][g]);
		} else {
		    printf("%i, ", a[i][g]);
		}
	    }
	}
    }

}

int main(int argc, char** argv) {

    int h1, h2;
    scanf("%i %i", &h1, &h2);
    int** a = (int**) malloc(sizeof(int) * h1*h2);
    for(int i = 0; i < h1; i++) {
	a[i] = (int*) malloc(sizeof(int) * h2);
    }
    fill(a, h1, h2);
    printArray(a, h1, h2);  
    printf("\n\n");
    printArray2(a, h1, h2);

    return 0;
}

