#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int* a = (int*) malloc(sizeof(int) * 1);
    int n = 0;
    do {
	a[n] = (int*) malloc(sizeof(int) * 1);
	scanf("%i", &a[n]);
	n++;
    } while(a[n-1] >= 0);
    
    for(int i = 0; i < n-1; i++) {
	printf("%i ", a[i]);
    }
    return 0;
}

