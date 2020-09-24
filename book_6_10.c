#include <stdio.h>

int main(int argc, char** argv) {

    int a, b;
    printf("apple -> ");
    scanf("%i", &a);
    printf("orange -> ");
    scanf("%i", &b);  
    if (a * 100 > b * 150) {
  	printf("take apple\n");
    } else {
	printf("take orange\n");
    }

    return 0;
}
