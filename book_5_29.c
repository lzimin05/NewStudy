#include <stdio.h>

int main(int agrc, char** argv) {

    int a, year;

    scanf("%i %i", &a, &year);

    int b = 0;
    
    while(a >= year) {
	a = a - year;
	year++;
    	b++;
    }
    printf("%i\n", b);
    return 0;
}
