#include <stdio.h>

int main(int argc, char** argv) {

    char a = 'a';
    int size1 = 0; 
    int size2 = 0;
    while (a != '\n') {
        scanf("%c", &a);
    	size1++;
    }
    a = 'a';
    while (a != '\n') {
	scanf("%c", &a);
    	size2++;
    }

    if (size1 == size2) {
	printf("True\n");
    } else {
	printf("False\n");
    }

    return 0;
}
