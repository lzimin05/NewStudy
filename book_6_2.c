#include <stdio.h>

int main(int argc, char** argv) {

    char a = 'a';
    int size1 = -1; 
    int size2 = -1;
    while (a != '\n') {
        scanf("%c", &a);
    	size1++;
    }
    a = 'a';
    while (a != '\n') {
	scanf("%c", &a);
    	size2++;
    }
    //printf("%i %i", size1, size2);
    if (size1 * 2 == size2) {
	printf("True\n");
    } else {
	printf("False\n");
    }

    return 0;
}
