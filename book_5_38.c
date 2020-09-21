#include <stdio.h>
#include <stdbool.h>
void field(int x) {
    if(x > 8 || x < 1) {
    	printf("Error!!!\n");
    }
}

int mod(int x, int x1) {
    x = x - x1;
    if (x < 0) {
  	return x * (-1);
    }
    return x;
}

int main(int argc, char** argv) {

    int x1, y1, x2, y2;
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    field(x1);
    field(y1);
    field(x2);
    field(y2);
    bool k;
    if (x1 == x2 || y1 == y2) {
	k = true;    	
	printf("True\n");
    } else {
   	x1 = mod(x1, x2);
 	y1 = mod(y1, y2);
	//printf("%i %i", x1, y1);
	if (x1 == 1 && y1 == 2 || y1 == 1 && x1 == 2) {
	    k = true;
	    printf("True\n");	
	} else {
	    k = false;
	    printf("False\n");	
	}
    }
    return 0;
}
