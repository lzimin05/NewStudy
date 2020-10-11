
// input N
// fill() random ints
// print()

// int det2(int** a);  // a - 2x2
// int det3(int** a);  // a - 3x3 via det2()

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int** a, int size) {
    srand(time(NULL) * (int) a);
    for(int i = 0; i < size; i++) {
	for(int g = 0; g < size; g++) {	
	    a[i][g] = rand() % 90 + 10;
	}
    }
}

void printArray(int** a, int size) {
    for(int i = 0; i < size; i++) {
	printf("[");
	for(int g = 0; g < size; g++) {
	    if(g == size -1) {
		printf("%i]\n", a[i][g]);
	    } else {
		printf("%i, ", a[i][g]);
	    }
	}
    }
}

int det2(int** a) {
    return a[0][0]*a[1][1] - a[0][1]*a[1][0];
}  


int det3(int** a, int size) {
    int sum = 0;
    int** b = (int**) malloc(sizeof(int) * 2*2);
    for(int i = 0; i < 2; i++) {
	b[i] = (int*) malloc(sizeof(int) * 2);
    }
    for(int n = 0; n < size; n++) {
	printf("\n%i\n ", a[0][n]);
	for(int i = 0; i < size; i++) {		//cтолбец
	    int pro = 0;			
	    for(int g = 0 ; g < size; g++) {	//строчка
		if (n != g && i != 0) {
		    b[i-1][pro] = a[i][g];
		    printf("b[%i][%i] = a[%i][%i] = ", i-1, pro, i, g);
		    pro++;
		    printf("%i; \n", a[i][g]);
		}
	    }
	}
	if((n + 2) % 2 == 0) { 
	    sum = sum+(a[0][n]*det2(b));
	} else {
	    sum = sum+(-1*a[0][n]*det2(b));
	}
	printf("%i", sum);
    }
    return sum;
}

//b[4]
//b[2][2]

int main(int argc, char** argv) {

    int size = 3;
    int** a = (int**) malloc(sizeof(int) * size*size);
    for(int i = 0; i < size; i++) {
	a[i] = (int*) malloc(sizeof(int) * size);
    }
    fill(a, size);
    printArray(a, size);
    printf("\n\n");
    int sum = det3(a, size);
    printf("\n%i", sum);
    for(int i = 0; i < size; i++) {
	free(a[i]);
    }
    free(a);
    return 0;
}
