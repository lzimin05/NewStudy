#include <stdio.h>

int main(int argc, char** argv) {

    int x1, x2;
    scanf("%i %i", &x1, &x2);
    printf("first number --> %i\nsecond number --> %i\n", x1, x2);
    if (x2 == 0) {
  	printf("Error!!!\n");
    } else {
   	printf("%d/%d = %.2f\n", x1, x2, (float) x1/x2);
    }
    return 0;
}
