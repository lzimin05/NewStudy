#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int* a, int size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
	a[i] = rand() % 90 + 10;
	printf("%i ", a[i]);
    }
}

int main(int argc, char** argv) {
    printf("Enter size -> ");
    int size;
    scanf("%i", &size);
    int* a = (int*) malloc(sizeof(int)*size);
    fill(a, size);
    printf("\n\n");
    for(int i = 0; i < size; i++) {
	if(a[i] % 2 != 0) {
	    printf("%i ", a[i]);
 	}
    }
}
