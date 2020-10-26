#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv) {

    int size = 0;
    char a[size];
    while(true) {
	scanf("%c", &a[size]);
	if(a[size] == '\n') {
	    break;
	} else {
	    size++;
	}
    }
    for(int i = 0; i < size; i++) {
	int n = 1;
	for(int g = 0; g < size; g++) {
	    if(i != g && a[i] == a[g]) {
		n++;
	    }
	}
	printf("%c -- %i\n", a[i], n);
    }
    printf("\n");
    return 0;
}
