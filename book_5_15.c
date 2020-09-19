#include <stdio.h>

int main(int argc, char** argv) {

    int sec;
    scanf("%i", &sec);
    printf("day - %i\n", sec/86400);
    sec = sec % 86400;
    printf("hour - %i\n", sec / 3600);
    sec = sec % 3600;
    printf("minute - %i\n", sec / 60);
    sec = sec % 60;
    printf("second - %i\n", sec);
    return 0;
}
