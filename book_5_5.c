#include <stdio.h>

int main(int argc, char** argv) {

	int a, b;
	scanf("%i %i", &a, &b);
	
	int c = a;
	a = b;
	b = c;
	
	printf("%i %i", a, b);
	
	return 0;
}