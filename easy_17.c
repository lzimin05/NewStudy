#include <stdio.h>

int main(int argc, char** argv) {
    int size = 0;
    char c[size];
    do {
	scanf("%c", &c[size]);    	
	size++;
    } while(c[size-1] != '\n');
    size--;
    printf("%i\n", size);
    int k;
    scanf("%i", &k);
    printf("\nk = %c\n", c[k-1]);
    return 0;
}
