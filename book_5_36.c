#include <stdio.h>

int main(int argc, char** argv) {

    int year;
    scanf("%i", &year);
    if (year % 4 == 0 && year % 400 != 0) {
   	printf("True\n");
    } else {
   	printf("False\n");
    }

    return 0;
}
