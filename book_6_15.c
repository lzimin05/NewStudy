#include <stdio.h>

void swap (int a, int b) {
   int c = a;
   a = b; 
   b = c;
}

int main(int argc, char** argv) {
    
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if (a > b && a > c) {
        if (b < c) {
	    b = b + a;
            a = b - a;
            b = b - a;
	} else {
	    c = c + a;
            a = c - a;
            c = c - a;
	}
    } else if (b > c && b > a) {
        printf("2");
	if (a < c) {
	    a = a + b;
            b = a - b;
            a = a - b;
	} else {
	    c = c + b;
            b = c - b;
            c = c - b;
	}
    } else if (c > a && c > b) {
   	if (a < b) {
	    a = a + c;
            c = a - c;
            a = a - c;
	} else {
	    b = b + c;
            c = b - c;
            b = b - c;
	}
    }
    printf("%i %i %i\n", a, b, c);
    return 0;
}
