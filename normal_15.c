#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {

    int n, m;
    scanf("%i %i", &n, &m);
    int** a = (int**) malloc(sizeof(int) * n * m);
    int* b = (int*) malloc(sizeof(int) * n * m);
    for(int i = 0; i < n; i++) {
	a[i] = (int*) malloc(sizeof(int) * m);
    }
    srand(time(NULL));
    int size = 0;
    for(int i = 0; i < n; i++) {
	for(int g = 0; g < m; g++) {
	    a[i][g] = rand() % 100 + 1;
	    printf("%i ", a[i][g]);
	    b[size] = a[i][g];
 	    size++;
 	}
   	printf("\n");
    }
    printf("\n\n");
    for(int i = 0; i < n*m; i++) {
	printf("%i ", b[i]);
    }
    printf("\n");
    return 0;
}
