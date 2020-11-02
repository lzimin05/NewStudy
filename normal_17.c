#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    int size = 0;
    char c[size];
    while(1) {
	scanf("%c", &c[size]);
  	if(c[size] == '\n') {
	    break;
	} else {
	    size++;
	}
    }
    char glasn[] = "AEIOUYaeiouy";
    char sogl[] = "BCDFGHJKLMNPQRSTVWXZbcdfghjklmnpqrstvwxz";
    srand(time(NULL));
    for(int  i = 0; i < size; i++) {
	if(strchr(sogl, c[i]) == NULL) {
	    printf("%i ", c[i]);
 	} else {
	    printf("%c ", glasn[rand() % 12]);
	}
    }
}
