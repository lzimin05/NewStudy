#include <stdio.h>
#include <stdbool.h>

bool hide(int n) {
   bool a = false;
   for(int i = 2; i < n; i++) {
	for(int g = 2; g < n; g++) {
	    if(i*g == n) {
		a = true;
	    }
	}
   }
   return a;
}

int main(int argc, char** argv) {
    int n;
    scanf("%i", &n);
    bool a = hide(n);    
    if(a) {
	printf("Составное число\n");
    } else {
	printf("Несоставное число\n");
    }

    return 0;
}
