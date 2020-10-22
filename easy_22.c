#include <stdio.h>

int main(int argc, char** argv) {

    printf("1)How many cat lives?\nanswers:\n-> 5 lives\n-> 7 lives\n-> 9 lives\nyour answer: ");
    int i;
    int score = 0;
    scanf("%i", &i);
    if (i == 9) {
	score++;
    }
    printf("2)How many centimeters in a meter?\nanswers:\n-> 10 centimeters\n-> 100 centimeters\n-> 1000 centimeters\nyour answer: ");
    scanf("%i", &i);
    if (i == 100) {
	score++;
    }
    printf("3)The speed of sound?\nanswers:\n-> 340 m/s\n-> 320 m/s\n-> 240 m/s\nyour answer: ");
    scanf("%i", &i);
    if (i == 340) {
	score++;
    }
    switch(score) {
	case(3):
	    printf("5 balov\n");
	    break;
	case(2):
	    printf("4 balov\n");
	    break;
	case(1):
	    printf("3 balov\n");
	    break;
	case(0):
	    printf("0 balov\n");
	    break;

    }
    return 0;
}
