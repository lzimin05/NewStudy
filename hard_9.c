#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct prizma {
    float volume; //объем призмы
    float height; //высота призмы
    int grains; //число боковых граней
    float side;	  //длинна сторон
    float base_area; //площадь основания
};

int main(int argc, char** argv) {
    struct prizma a;
    a.volume = 0;
    a.height = 0;
    a.grains = 0;
    a.side = 0;
    a.base_area = 0;
    while(true) {
	printf("0 - выход\n1 - показать высоты призмы\n2 - показать колличество боковых граней\n3 - показать площадь основания\n4 - показать длинну сторон призмы\n5 - показать объем призмы\n6 - установить высоту призмы\n7 - устоновить длинну сторон призмы\n8 - установить количество граней\n9 - задать площадь основания\n>> ");
	int proverka;
	scanf("%i", &proverka);
	system("clear");
	switch (proverka) {
	    case(0):
		printf("Left to the program\n");
		return 0;
	    case(1):
		if(a.height == 0) {
		    printf("Ты должен ввести длинну высоты\n");
		} else {
		    printf(":= %.2f\n", a.height);
		}
		break;
	    case(2):
		if(a.grains == 0) {
		    printf("Ты должен ввести количество граней\n");
		} else {
	  	    printf(":= %i\n", a.grains);
		}
		break;
	    case(3):
		if(a.base_area == 0) {
		    printf("Ты должен ввести площадь основания\n");
		} else {
		    printf(":= %.2f\n", a.base_area);
		}
		break;
	    case(4):
		if(a.side == 0) {
		    printf("Ты должен ввести длинну сторон призмы\n");
		} else {
		    printf(":= %.2f\n", a.side);
		}
		break;
	    case(5):
	 	if(a.volume == 0) {
		    printf("Ты должен ввести объем призмы\n");
		} else {
	 	    printf(":= %.2f\n", a.volume);
		}
		break;
	    case(6):
		scanf("%f", &a.height);
		if(a.height <= 0) {
		    a.height = 0;
		    printf("некорректно введено\n");
		}
		break;
	    case(7):
		scanf("%f", &a.side);
		if(a.side <= 0) {
		    a.side = 0;
		    printf("некорректно введено\n");
		}
		break;
	    case(8):
		scanf("%i", &a.grains);
		if(a.grains <= 0) {
		    a.grains = 0;
		    printf("некорректно введено");
		}
		break;
	    case(9):
		scanf("%f", &a.base_area);
		if(a.base_area <= 0) {
		    a.base_area = 0;
		    printf("некорректно введено");
		}
		break;
	}
    }
    return 0;
}
