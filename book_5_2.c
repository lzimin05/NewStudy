#include <stdio.h>

int main(int argc, char** argv) {
	for(int i = 0; i < 100; i++) {
		char c;
		scanf("%c", &c);
		if (i == 0) {
			printf("\n\n\nhello, ");
		}
		if (c == '\n') {
			return 0;
		} else {
			printf("%c", c);
		}
	}

	return 0;
}