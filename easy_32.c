#include <stdio.h>

void trig(int n) {
    int size;
    int k = 1;
    for(int i = 1; i <= 7; i++) {
	size = 1;
	while(size <= n) {
	    for(int g = 1; g <= 7-i; g++) {
		printf(" ");
	    }
	    for(int g = 1; g <= k; g++) {
		printf("*");
	    }
	    for(int g = 1; g <= 7-i; g++) {
		printf(" ");
	    }
	    printf(" ");
	    size++;
	}
	k = k + 2;
	printf("\n");
    }
}

int main(int argc, char** argv) {

    int n;
    scanf("%i", &n);

    trig(n);

    return 0;
}
