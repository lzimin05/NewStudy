#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv) {

    int a;
    scanf("%i", &a);
    if(a >= 100 && a < 1000) {
	if (a / 100 == a/ 10 % 10 || a / 100 == a % 100 % 10 || a/ 10 % 10 == a % 100 % 10) {
	     printf("True\n");
	} else {
	     printf("False\n");
	}
    }

    return 0;
}
