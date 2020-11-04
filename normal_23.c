#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int sportmen, try;
    printf("number sportmen, number try jump --> ");
    scanf("%i %i", &sportmen, &try);
    float** a = (float**) malloc(sizeof(int) * sportmen * try);
    for(int i = 0; i < sportmen; i++) {
	a[i] = (float*) malloc(sizeof(int) * try);
    }
    int max = 0;
    for(int i = 0; i < sportmen; i++) {
	printf("#%i person : ", i+1);
	for(int g = 0; g < try; g++) {
	    scanf("%f", &a[i][g]);
	    if(max < a[i][g]) {
		max = a[i][g];
	    }
  	}
	printf("\n");
    }
    for(int i = 0; i < sportmen; i++) {
	for(int g = 0; g < try; g++) {
 	    if(max == a[i][g]) {
		printf("sportmen - %i try - %i\n", i+1, g+1);
	    }
	}
    }
    return 0;
}
