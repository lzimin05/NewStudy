#include <stdio.h>
#include <stdlib.h>

int main(int argc) {
    // 0 - зачеркнуто
    int size;
    scanf("%i", &size);
    printf("     ");
    int* a = (int*) malloc(sizeof(int)*(size-1));
    for(int i = 2; i <= size; i++) {
	a[i] = i;
	if(a[i] % 10 == 1) {
	    printf("\n");
	}
	printf("%3i  ", a[i]);
    }
    printf("\n\n\n");
    int sit = 1; //	1 - |; 2 - / 
    for(int i = 2; i <= size; i++) {
	if(i*i > size) {
	    break;
	}
	if(i != 0) {
	    for(int g = i+1; g <= size; g++) {
		if(a[g] % i == 0) {
		    a[g] = 0;
		}
	    }
	}
	
    }
    for(int i = 0; i <= size; i++) {
	if(a[i] != 0) {
	    printf("%i ", a[i]);
	}
    }
    printf("\n");
    return 0;
}
