#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int a[], int size) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < size; i++) {
	a[i] = rand() % 90 + 10;
    }
}

void printArray(int a[], int size) {
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

    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
	fill(a[i], size);
        printArray(a[i], size);
    }

    for(int i = 0; i < size; i++) {
	free(a[i]); 
    }
}
