#include <stdio.h>
#include <stdbool.h>
void field(int x) {
    if(x > 8 || x < 1) {
    	printf("Error!!!\n");
    }
}

int mod(int x, int x1) {
    if(x - x1 < 0) {
	return x = x1 - x;
    } 
	return x = x - x1;
}

int main(int argc, char** argv) {

    int x1, y1, x2, y2;
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    field(x1);
    field(y1);
    field(x2);
    field(y2);
    x1 = mod(x1, x2);
    y1 = mod(y1, y2);
    bool t;
    if (x1 == y1) {
	printf("True\n");    	
	t = true;
    } else {
    	printf("False\n");
        t = false;
    }
    return 0;
}
