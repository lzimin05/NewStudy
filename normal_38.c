#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv) {
    int a, b;
    scanf("%i %i", &a, &b);
    int sum = 0;
    while(true) {
	if(a < b) {
	    break;
  	}
  	a = a - b;
	sum++;
    }
    printf("%i %i\n", sum, a);
    return 0;
}
