#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int a[], int size) {
    srand(time(NULL));
    for(int  i = 0; i < size; i++) {
	a[i] = rand() % 50 + 1;
    }
}

void printArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
	printf("%i ", a[i]);
    }
    printf("\n\n");
}

int deleteNumber(int a[], int size) {
    int k;
    scanf("%i", &k);
    //int i = size-1;
    while(k+1 < size) {
	a[k] = a[k+1]; //0 - 0|1 - 1|2 - 2|3 - 4| 4 - 5| 5 - 6| 6 - 7| size = 7
	k++;
    }
    size = size -1;
    return size;
}

int main(int argc, char** argv) {
    int size;
    scanf("%i", &size);
    int* a = (int*) malloc(sizeof(int)*size);
    fillArray(a, size);
    printArray(a, size);
    size = deleteNumber(a, size); 
    printf("%i\n", size);   
    printArray(a, size);

    return 0;
}
