#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int a[], int size) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100 + 1;
    }
}

void printArray(int a[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
	if (i == size - 1) {
	    printf("%i", a[i]);	
	} else {  	
	    printf("%i, ", a[i]);
   	} 
    }
    printf("]\n");
}

void sort(int a[], int size) {
    for (int i = 0; i < size; i++) {
    	for(int j = i; j < size; j++) {
	    if (a[i] < a[j] && i != j) {
	    	int c = a[i];
		a[i] = a[j];
		a[j] = c;
	    }	
	}
    }
}

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);

    int* a = (int*) malloc(sizeof(int) * size);

    fill(a, size);
    printArray(a, size);    
    sort(a, size);
    printArray(a, size);

    free(a);
    return 0;
}
