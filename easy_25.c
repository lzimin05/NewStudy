#include <stdio.h>

int main(int argc, char** argv) {
    int n;
    scanf("%i", &n);
    int sum = 0;
    while(n != 0) {
	if(n % 5 == 0) {
	    sum = sum + n;
   	}
   	n--;
    }
    printf("%i\n", sum);
    return 0;
}
