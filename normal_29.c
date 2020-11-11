#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int size = 1;
    char* a = (char*) malloc(sizeof(char)* size);
    while(1) {
	scanf("%c", &a[size-1]);
	if(a[size-1] == '\n' && a[size] != ' ') {
	    break;
	} else {
	    size++;
	}
    }
    printf("------------------------------\n");
    int sum = 0;
    int n = 0;
    for(int i = 0; i<size+1; i++) {
   	if(a[i] == 10 || a[i] == 44) {
	    sum = sum + n;
	    n = 0;
	} else {
	    if(n >= 1) {
		n = n * 10;
	    }
	    if(a[i] == '-') {
		n = n + -1*(a[i+1] - '0');
	   	i++;
	    } else if (a[i] >= 48 && a[i] <=57) {
		n = n + (a[i] - '0');
	    }
	}
    }
    printf("%i\n", sum);
    return 0;
}
