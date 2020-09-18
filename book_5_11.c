#include <stdio.h>

int main(int argc, char** argv) {

    char c;
    int a;
    printf("Enter letter and number\na) a^4\nb) a^6\nc) a^5\n");
    scanf("%c %i", &c, &a);
    
    if (c == 'a') {
    	for (int i = 0; i < 2; i++) {
	    a = a * a;
	}
    }
    if (c == 'b') {
	int a1 = a;    	
	for (int i = 0; i < 2; i++) {
	    a = a * a;	
	}
	a = a * a1*a1;
    }

    if (c == 'c') {
    	for (int i = 0; i < 2; i++) {
	    a = a * a;	
	}
	a = a + a;
    }
    
    printf("%i\n", a);
    return 0;
}
