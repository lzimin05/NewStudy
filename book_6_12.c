#include <stdio.h>

int main(int argc, char** argv) {

    int x;
    scanf("%i", &x);
    int e, d, s, t;
    e = x / 1000;
    d = x / 100 % 10;
    s = x % 100 / 10;
    t = x % 10;
    //printf("%i %i %i %i", e, d, s, t);
    if (x < 1000 || x > 9999) {
	printf("Error!!!");
    } else { 
	if (e + d == s + t) {
            printf("True\n");
    	} else {
	    printf("False\n");
 	}
    }

    return 0;
}
