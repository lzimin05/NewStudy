#include <stdio.h>

int main(int argc, char** argv) {

	int a, b, c;
	scanf("%i %i %i", &a, &b, &c);
	int v = a;
	a = b;
	b = v;
	v = b;
	b = c;
	c = v;
	
	printf("%i %i %i", a, b, c);

	return 0;
}