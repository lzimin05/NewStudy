#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int size = 1;
    int* a = (int*) malloc(sizeof(int)*size);
    int sum = 0;
    printf("if you want left to the program enter -1\n");
    while(a[size-1] != -1) {
	scanf("%i", &a[size]);
	sum = sum + a[size];
	size++;
    }
    printf("%i\n", (sum+1)/(size-2));
    return 0;
} 
