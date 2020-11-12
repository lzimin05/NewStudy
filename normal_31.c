#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int size = 1;
    char* a = (char*) malloc(sizeof(char)*size);
    while(1) {
	scanf("%c", &a[size-1]);
	if(a[size-1] == '\n' && a[size] != ' ') {
	    break;
	}
	size++;
    }
    size--;
    int sit = 1;
    for(int i = 0; i <= size; i++) {
	if(a[i] == '\n' && a[i] != ' ') {
	    break;
	}
	if(a[i] == ' ') {
	    sit = 1;
	} else {
	    if(sit == 1) {
		i++;
		sit = 0;
	    }
	}
	printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
