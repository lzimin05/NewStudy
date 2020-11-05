#include <stdio.h>

int plus_number(int size, int k) {
    for(int i = 0; i < size; i++) {
	int d;
	printf("Введите число которое хотите добавить --> ");
     	scanf("%i", &d);	
	k = k*10+d;
    }
    return k;
}

int main(int argc, char** argv) {
    int k;
    printf("Введите число --> ");
    scanf("%i", &k);
    int size;
    printf("Введите сколько чисел хотитите прибавить к числу --> ");
    scanf("%i", &size);
    k = plus_number(size, k);
    printf("%i\n", k);
    return 0;
}
