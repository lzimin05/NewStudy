#include <stdio.h>

int main(int argc, char** argv) {

	int i;
	scanf("%i", &i);
	if (i >= 0) {
		i++;
	}
	printf("%i", i);
	return 0;
}