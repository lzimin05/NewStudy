#include <stdio.h>

int main(int argc, char** argv) {

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    a = a * 100;
    b = b * 150;
    c = c * 170;
    if (a > b && a > c) {
    	printf("take apple\n");
    }
    if (b > c && b > a) {
	printf("take orange\n");
    }
    if (c > a && c > b) {
	printf("take banana\n");
    }
    return 0;
}
