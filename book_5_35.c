#include <stdio.h>

int main(int argc, char** argv) {

    int x;
    scanf("%i", &x);
    printf("%.2f\n%.2f\n", (float) 100/x, (float) 100/(x-1));

    return 0;
}
