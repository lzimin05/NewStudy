#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int** c, int N, int M) {
    srand(time(NULL));
    for(int i = 0; i < N; i++) {
	for(int g = 0; g < M; g++) {
	    c[i][g] = rand() % 99 + 1;
	}
    }
}

void printArray(int** c, int N, int M) {
    for(int i = 0; i < N; i++) {
	for(int g = 0; g < M; g++) {
	    printf("%3i ", c[i][g]);
	}
	printf("\n");
    }
}

void clearArray(int** a, int N, int M) {
    for(int  i = 0; i < N; i++) {
	for(int g = 0; g < M; g++) {
	    if(g % 2 != 0 && g <= 5) {
		a[i][g] = 0;
	    } 
      	}
    }
}

int main(int argc, char** argv) {
    int N, M;
    scanf("%i %i", &N, &M);
    int** a = (int**) malloc(sizeof(int)*N*M);
    for(int i = 0; i < N; i++) {
	a[i] = (int*) malloc(sizeof(int)*M);
    }
    fillArray(a, N, M);
    printArray(a, N, M);
    clearArray(a, N, M);
    printf("\n\n------------------------\n\n");
    printArray(a, N, M);

    return 0;
}
