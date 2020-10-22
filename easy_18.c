#include <stdio.h>
#include <stdlib.h>

void hexx(int n) {
    if(n < 0) {
	printf("Error!!!\n");
    } else {
    	do {
   	    switch(n/16) {
	    	case(10):
	    	    printf("A");
		    break;
	    	case(11):
	    	    printf("B");
		    break;
	    	case(12):
	    	     printf("C");
		break;
	    	case(13):
	    	     printf("D");
		     break;
 	    	case(14):
	    	     printf("E");
		     break;
	    	case(15):
	    	     printf("F");
		     break;
	     	default:
	  	     printf("%i", n/16);
	     	     break;
	    }
	    n = n % 16;
        } while(n > 16);
    switch(n) {
   	case(10):
	    printf("A");
	    break;
	case(11):
	    printf("B");
  	    break;
	case(12):
	    printf("C");
	    break;
	case(13):
	    printf("D");
	    break;
 	case(14):
	    printf("E");
	    break;
	case(15):
	    printf("F");
	    break;
	default:
	    printf("%i", n/16);
	    break;
	}
    printf("\n");
    }
}

int main(int argc, char** argv) {

    int n;
    scanf("%i", &n);
    hexx(n);

    return 0;
}
