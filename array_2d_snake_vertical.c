#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void fill(int a[], int size) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < size; i++) {
	a[i] = rand() % 90 + 10;
    }
}

void printArray1(int a[], int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
	if (i != size - 1) { 	
	    printf("%i, ", a[i]);
	} else {
	    printf("%i", a[i]);
	}
    }
    printf("]\n");
}


void printArray2(int* a[], int size) {
    for(int g = 0; g < size; g++) {
	if ((g + 2) % 2 == 0) {    	
	    for(int i = 0; i < size; i++) {
	   	 printf("%i, ", a[i][g]);				//столбец
    	    }
	} else {
	    for(int i = size-1; i >= 0; i--) {
		printf("%i, ", a[i][g]);
	    }
	}
    }
}    

int main(int argc, char** argv) {

//    [  ][  ][  ][  ][  ]  ...  [   ]
//     |   |   |   |   |           |
//    [  ][  ][  ][  ][  ]       [   ]
//    [  ][  ][  ][  ][  ]       [   ]
//     ..  ..  ..  ..  ..         ..
//    [  ][  ][  ][  ][  ]       [   ]

    int size;
    scanf("%i", &size);
    int* a[size];
    printf("[");
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
	fill(a[i], size);
    }
	
	printArray2(a, size);

 
    printf("]\n");
    for(int i = 0; i < size; i++) {
	//a[i] = (int*) malloc(sizeof(int) * size);
	//fill(a[i], size);
        printArray1(a[i], size);
    }
    for(int i = 0; i < size; i++) {
	free(a[i]); 
    }
}

