#include <stdio.h>

int main(int argc, char** argv) {

    int x, y;
    scanf("%i %i", &x, &y);
    if (x == 0 || y == 0) {
	printf("Error!!!\n");
	return 0;
    }
    if (x > 0) {
	if (y > 0) {
	    printf("I\n");
	} else {
	    printf("IV\n");
	}
    } else {
	if (y > 0) {
	    printf("II\n");
	} else {
	    printf("III\n");
	}
    }

    return 0;
}
