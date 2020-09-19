#include <stdio.h>
#include <stdbool.h>

bool booling(bool a) {
    int i;
    scanf("%i", &i);
    i = i % 2;
    printf("i = %i\n", i);
    if (i == 1) {
       	return true;
    } else {
    	return false;
    }
}

int main(int argc, char** argv) {

    bool a, b;
    a = booling(a);
    b = booling(b);
    
    /*bool c = a;
    a = b;
    b = c;
    if (a == true) {
   	printf("true\n");
    } else {
    	printf("false\n");
    }
    
    if (b == true) {
   	printf("true\n");
    } else {
    	printf("false\n");
    }
    */

    if (a == b) {
    	if (a == 1) {
	    printf("True\nTrue\n");	
	} else {
	    printf("False\nFalse\n");	
	}
    } else {
	if (a == 1) {
	    a = 0;
 	    b = 1;
	    printf("False\n");
	    printf("True\n");		
	} else {
	    a = 1;
	    b = 0;
	    printf("True\n");
	    printf("False\n");	    
	}
    }

    return 0;
}
