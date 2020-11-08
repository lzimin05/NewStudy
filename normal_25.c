#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(int argc, char** argv) {
    int size = 0;
    char* a = (char*) malloc(sizeof(char)*size);
    while(1) {
	scanf("%c", &a[size]);
	if(a[size] == '\n' && a[size] != ' ') {
	    break;
	}
	size++;
    }
    int min = INT_MAX;
    int p = 0;
    for(int i = 0; i < size; i++) {
	if(a[i] == ' ' || size-1 == i) {
	    if(p < min) {
	 	min = p;
		if(size-1 == i) {
		    min++;
		}   	
	    }
	    p = 0;
	} else {
	    p++;
	}
	//printf("%c %i\n",a[i], p);
    }
    printf("%i\n", min);
    return 0;
}
