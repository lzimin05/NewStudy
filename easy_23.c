#include <stdio.h>

int main(int argc, char** argv) {

    int size;
    scanf("%i", &size);
    float a[size];
    int sum = 0;
    for(int i = 0; i < size; i++) {
	scanf("%f", &a[i]);
	sum = sum + a[i];
    }
    printf("%f\n", (float)sum/size); 

    return 0;
}
