#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) { 
    int n;
    printf("printf N --> ");
    scanf("%i", &n);
    int k;
    printf("printf k --> ");
    scanf("%i", &k);
    int sum = 0;
    for(int i = 1; i <= n; i++) {
 	sum = sum + (pow(i, k));
    }
    printf("%i\n", sum);
    return 0;
}
