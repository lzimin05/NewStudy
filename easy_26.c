#include <stdio.h>

int main(int argc, char** argv) {

    printf("\n\n		Таблица квадратов чисел\n		-----------------------\n\nЧисло		Квадрат числа\n-----		-------------\n");
    for(int i = 1; i <= 5; i++) {
	printf("%i %16.i\n", i, i*i);
    }
    return 0;
}
