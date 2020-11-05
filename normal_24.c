#include <stdio.h>

int main(int argc, char** argv) {
    int size = 0; 
    char string[size];    
    while(1) {
  	scanf("%c", &string[size]);
	if(string[size] == '\n' && string[size] != ' ') {
	    break;
 	}
	size++;
    }
    int sum = 0;
    int max = 0;
    for(int i = 0; i < size; i++) {
	printf("%c", string[i]);
	if(string[i] == ' ') {
 	    if(max < sum) {
		max = sum;
	    }
	    sum = 0;
	} else {
	    sum++;
	}
  	if(size-1 == i) {
	    if(max < sum) {
		max = sum;
	    }
	}
    }
    printf("\n%i\n", max);
    return 0;
}
