#include <stdio.h>

int main(int argc, char** argv) {

    int n;
    scanf("%i", &n);
    float sum = 2;
    for(int i = 0; i < n; i++) {
	sum = 1+1/(sum);
    }
    printf("%f", sum);
    return 0;
}
