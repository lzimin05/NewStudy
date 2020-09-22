#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int a[], int size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
    	a[i] = rand() % 100 + 1;
    }
}

void printArray(int a[], int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
	if (i == size - 1) {
	    printf("%i", a[i]);
	} else {
	    printf("%i, ", a[i]);
	}
    }
    printf("]\n");
}

/**
   1. partition
   [                    ]
   [          ][        ]
   [    ][    ][   ][   ]
   [ |  ][  | ][ | ][ | ]
   [][][][][][][][][][][]

   2. merge
   [2][1][5][3][][][][][][][]
   [1  2][3  5][2  4][1  3][  ] ...
   [1  2  3  5][1  2  3  4] ...
   ...
   [                      ]
*/

void mergeSort(int a[], int size) {

}

void merge(int a[], int b[], int size, int c[]) {
    // c[1 2 2 3 4 5]    // a[1 2 3]
    // b[2 4 5]

    int a1 = 0;
    int b1 = 0;

    for (int i = 0; i < size; i++) {
    	if (a[a1] < b[b1]) {
    	    if(a[a1] == b[b1]) {
    	    	c[i] = a[a1];
	    	c[i++] = b[b1];
	    	i++;
            } else {
	    	c[i] = a[a1];
	    	a1++;
	    }
    	} else {
	    c[i] = b[b1];
            b1++;
	}
    }
}

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);
    int* a = (int*) malloc(sizeof(int) * size);

    fill(a, size);
    printArray(a, size);

    int p[] = {1, 2, 3};
    int q[] = {2, 3, 5};
    int c[6];
    merge(p, q, 6, c);
    printArray(c, 6);
    

    free(a);
    return 0;
}


