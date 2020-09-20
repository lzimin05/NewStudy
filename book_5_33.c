#include <stdio.h>

int main(int argc, char** argv) {

    int x;
    scanf("%i", &x);
    if (x > 9 && x < 100) {
    	if (x / 10 == x % 10) {
    	    printf("1\n");
    	} else {
      	    printf("2\n");
        }
    }
    return 0;
}
