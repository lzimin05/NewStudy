#include <stdio.h>

int main(int argc, char** argv) {

    int size1 = 0;
    int size2 = 0;
    char a;
    do {
	scanf("%c", &a);
        size1++;
    } while (a != '\n');

    do {
	scanf("%c", &a);
 	size2++;
    } while (a != '\n');

    if (size1 > size2) {
	printf("True\n");
    } else {
	printf("False\n");
    }

    return 0;
}
