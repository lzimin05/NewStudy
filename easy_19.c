#include <stdio.h>

int main(int argc, char** argv) {

    int x;
    scanf("%i", &x);
    if(x >= 10000 && x < 100000) {
	if(x / 10000 == x % 10 && x/1000%10 == x % 100 / 10) {
	    printf("True\n");
	} 
   } else {
	printf("Error!!!");
	return 1;
    }

    return 0;
}
