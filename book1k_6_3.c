#include <stdio.h>

int main(int argc, char** argv) {

	int i;
	scanf("%i", &i);
	
	if (i > 0) {
		i++;
	} else if (i < 0) {
		i -= 2;
	} else {
		i = 10;
	}
	printf("%i", i);
	return 0;
}