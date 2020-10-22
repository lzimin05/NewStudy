#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {

    int n, m;
    int sum = 0;
    scanf("%i %i", &n, &m);
    srand(time(NULL));
    for(int i = 0; i < m; i++) {
	for(int g = 0; g < n; g++) {
	    int i = rand() % 100;
	    sum = sum + i;
	    printf("%2.i ", i);
	}
	printf("\n");
    }
    return 0;
}
