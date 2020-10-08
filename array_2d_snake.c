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


void printArray2(int a[], int size, int b, bool g) {
    b++;
    if ((b + 1) % 2 == 0 && g != true) {
    	for(int i = 0; i < size; i++) {
	    if (i != size - 1) { 	
		if (g == true) {	        
		    printf("%i", a[i]); //!
 		} else {
		    printf("%i, ", a[i]);
		}
	    } else {
	    	printf("%i, ", a[i]);
	    }
        }
    } else {
	for(int i = size-1; i >= 0; i--) {
	    if (i == 0) { 	
	        if (g == true) {	        
		    printf("%i", a[i]); //!
 		} else {
		    printf("%i, ", a[i]);
		}
	    } else {
	    	printf("%i, ", a[i]);
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
	bool g;
	if (i == size - 1) {
	    g = true;
	} else {
 	    g = false;
	}
	a[i] = (int*) malloc(sizeof(int) * size);
	fill(a[i], size);
        printArray2(a[i], size, i, g);
    }
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
