#include <stdio.h>
#include <stdlib.h>

struct time {
    int hours;
    int minuts;
    int second;
};

int main(int argc, char** argv) {

    struct time a[1];
    printf("Enter hours --> ");
    scanf("%i", &a[0].hours);
    printf("Enter minuts --> ");
    scanf("%i", &a[0].minuts);
    printf("Enter second --> ");
    scanf("%i", &a[0].second);
    printf("Enter left time on second --> ");
    scanf("%i", &a[1].second);
    a[0].second = (a[0].hours*3600)+(a[0].minuts*60)+a[0].second;
    if(a[0].second < a[1].second) {
	printf("Error!\n");
    } else {
	a[0].second = a[0].second-a[1].second;
	a[0].hours = a[0].second/3600;
	a[0].minuts = a[0].second%3600/60;
	a[0].second = a[0].second%3600%60;
	printf("%i:%i:%i\n", a[0].hours, a[0].minuts, a[0].second);
    }
    for(int i = 0; i <= 1; i++) {
	printf("time %i\n-----------\nhours --> ", i);
    	scanf("%i", &a[i].hours);
    	printf("minuts --> ");
    	scanf("%i", &a[i].minuts);
    	printf("second --> ");
    	scanf("%i", &a[i].second);
    }

    for(int i = 0; i <= 1; i++) {
	a[i].second = (a[i].hours*3600)+(a[i].minuts*60)+a[i].second;
    }
    printf("%i\n", abs(a[0].second-a[1].second));

    return 0;
}
