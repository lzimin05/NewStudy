#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int x1, y1;
    scanf("%i %i", &x1, &y1);
    int x2, y2;
    scanf("%i %i", &x2, &y2);
    if(abs(x1-x2) == abs(y1-y2)) {
	printf("True\n");
    } else {
	printf("False\n");
    }
    return 0;
}
