#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct information {
    char* name;
    char* surname;
    char* zodiaka;
    int day;
    int month;
    int year;
};

int main(int argc, char** argv) {
    int size;
    printf("Сколько людей добавить хочешь\n>> ");
    scanf("%i", &size);
    struct information book[size];
    char pt;
    system("clear");
    scanf("%c", &pt);
    for(int i = 0; i < size; i++) {
	int proverka = 0;
        book[i].name = (char*)malloc(proverka+1);
	printf("Введите имя и фамилию через пробел\n>> ");
  	while(true) {
  	    scanf("%c", &book[i].name[proverka]);
	    if(book[i].name[proverka] == ' ') {
		book[i].name[proverka] = '\0';
		break;
	    }
	    proverka++;
   	}
	proverka = 0;
 	book[i].surname = (char*) malloc(proverka+1);
  	while(true) {
	    scanf("%c", &book[i].surname[proverka]);
	    if(book[i].surname[proverka] == '\n' && book[i].surname[proverka] != ' ') {
		book[i].surname[proverka] = '\0';
		break;
	    }
	    if(book[i].surname[proverka] == ' ') {
		printf("Только имя и фамилию!!!\n");
		book[i].surname[proverka] = '\0';
		break;
	    }
	    proverka++;
 	}
	printf("Введите знак задиака\n>> ");
	proverka = 0;
  	book[i].zodiaka = (char*) malloc(proverka + 1);
        while(true) {
	    scanf("%c", &book[i].zodiaka[proverka]);
	    if(book[i].zodiaka[proverka] == '\n' && book[i].zodiaka[proverka] != ' ') {
		book[i].zodiaka[proverka] = '\0';
		break;
	    }
	    proverka++;
    	}
	book[i].day = 0;
	book[i].month = 0;
	book[i].year = 0;
	printf("Введите дату рождния (дд.мм.гг)\n>> ");
	while(true) {
	    char date;
	    scanf("%c", &date);
	    if(date == '.') {
		date = '\0';
		break;
	    }
	    if(book[i].day > 0) {
		book[i].day = book[i].day*10;
		book[i].day += date - '0'; 
	    } else {
	        book[i].day = date - '0';
	    }
	    proverka++;
	}
	
	while(true) {
	    char date;
	    scanf("%c", &date);
	    if(date == '.') {
		date = '\0';
		break;
	    }
	    if(book[i].month > 0) {
		book[i].month = book[i].month*10;
		book[i].month += date - '0'; 
	    } else {
	        book[i].month = date - '0';
	    }
	    proverka++;
	}
	
 	while(true) {
	    char date;
	    scanf("%c", &date);
	    if(date == '\n') {
		date = '\0';
		break;
	    }
	    if(book[i].year > 0) {
		book[i].year = book[i].year*10;
		book[i].year += date - '0'; 
	    } else {
	        book[i].year = date - '0';
	    }
	    proverka++;
	}
	
    }
    int number;
    printf("Введите порядковый номер месяца\n>> ");
    scanf("%i", &number);
    for(int i = 0; i < size; i++) {
	if(number == book[i].month) {
	    printf("Имя - %s\nФамилия - %s\nЗадиака - %s\n%i.%i.%i\n", book[i].name, book[i].surname, book[i].zodiaka, book[i].day, book[i].month, book[i].year);    
	}
    }

    return 0;
}
