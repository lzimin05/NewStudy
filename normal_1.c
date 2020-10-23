#include <stdio.h>

int main(int argc, char** argv) {

    int sum1 = 0;
    int sum2 = 0;
    char a;
    do {
	scanf("%c", &a);
  	if(a == '}') {
	    sum1++;
	}
  	if(a == '{') {
	    sum2++;
	}
    } while(a != '0');
    if(sum1 == sum2 && sum1 != 0) {
	printf("True\n");
    } else if(sum1 == 0 && sum2 == 0) {
	printf("Error!!!\n");
    } else {
	printf("False\n");
    }
    
    return 0;
}
