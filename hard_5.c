#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


struct animal12 {
    char animal[10];
    char sex[10];
    char name[15];
    float price;
    int number;
};

int main(int argc, char** argv) {
    int size = 0;
    struct animal12 beaste[10];
    while(true){
	system("clear");
	printf("Ты хочешь ввнести новые данные в таблицу?(Yes/No)\n");
  	int n = 0;
        char* a = (char*) malloc(sizeof(char)*n);
   	while(true) {
	    scanf("%c", &a[n]);
	    if(a[n] == '\n') {
		break;
	    }
	    n++;
 	}
    	if(strcmp(a, "Yes\n") == 0 || strcmp(a, "yes\n") == 0) {
	    printf("Ok\n");
	} else  if(strcmp(a, "No\n") == 0 || strcmp(a, "no\n") == 0) {	//Проверка хочет ли пользователь добавить таблицу
	    printf("Left to the program:\n");
	    break;
	} else {
	    printf("Error!!!\n");
	    return 1;
	}
  	//beaste.animal
	printf("Введите название животного --> ");
	scanf("%s", beaste[size].animal);
	//beaste.sex
	printf("Введите пол животного (male/female) --> ");
	scanf("%s", beaste[size].sex);
	//beaste.name
	printf("Введите имя животного(кличка) --> ");
	scanf("%s", beaste[size].name);
	//beaste.price
	printf("Введите сколько стоит животное --> ");
	scanf("%f", &beaste[size].price);
	//beaste.number
	printf("Введите количество животных --> ");
	scanf("%i", &beaste[size].number);
	printf("Do you want save?\n");
	char pr;
	scanf("%c", &pr);
	size++;
    }
    printf("  Названиe | Пол животного |  Имя животного  | Цена | Кол-во \n");
    for(int i = 0; i < size; i++) {
	printf("%8s %12s %13s %16.2f %3i\n", beaste[i].animal, beaste[i].sex, beaste[i].name, beaste[i].price, beaste[i].number);
    }
    return 0;
}
