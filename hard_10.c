#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct String {
    int lenght; //длинна
    char* a; //сам масив
    
};

int hideString(struct String string[], int size) {
    int c = 0;
    printf("Введите строку, номер которой хотите найти (если -1, то значит такого элемента нету):\n>> ");
    char* proverka = (char*) malloc(c+1);
    while(true) {
	scanf("%c", &proverka[c]);
	if(proverka[c] == '\n' && proverka[c] != ' ') {
	    proverka[c] = '\0';
	    break;
  	}
	c++;
    }
    for(int i = 0; i < size; i++) {
	if(strcmp(string[i].a, proverka) == 0) {
	    return i+1;
	} 
    }
    return -1;
}

int main(int argc, char** argv) {
    int size; //скок будет строк
    printf("Сколько будет строк?\n>> ");
    scanf("%i", &size);
    if(size < 0) {
	size = size * -1;
    }
    char pr;		//куда то деть нужно Enter
    scanf("%c", &pr);
    struct String string[size];
    

    for(int i = 0; i < size; i++) {
	printf("Введите %i строку: ", i+1);
	string[i].lenght = 0;
	string[i].a = (char*) malloc(string[i].lenght+1);
	while(true) {
	    scanf("%c", &string[i].a[string[i].lenght]);
	    if(string[i].a[string[i].lenght] == '\n' && string[i].a[string[i].lenght] != ' ') {
		string[i].a[string[i].lenght] = '\0';
		break;
	    }
	    string[i].lenght++;
	}
    }
    int proverka = hideString(string, size); 
    printf("Номер введенной Вами строки в наборе строк = %i\n", proverka);
    proverka = 0;
    printf("Если вы хотите вывести все строки - 0\nEсли хотите ");
    while(proverka < size) {	
	printf("%i, ", proverka+1);
	proverka++;
    }
    printf("строку то введите его номер\n>> ");
    scanf("%i", &proverka);
    if(proverka == 0) {
	for(int i = 0; i < size; i++) {
	    printf("Строка %i - %s\n", i+1, string[i].a);
	}
    } else {
	printf("Строка %i - %s\n", proverka, string[proverka-1].a);
    }
    
    printf("Если Вы хотите объединить все строки, нажмите - 1. Если нет, нажмите - 0: ");
    scanf("%i", &proverka);
    if(proverka == 0) {
	return 0;
    }
    int sum = 0;
    for(int i = 0; i < size; i++) {
	sum += string[i].lenght;
    }
    char* rt = (char*) malloc(sum);
    for(int i = 0; i < size; i++) {
	rt = strcat(rt, string[i].a);
    }
    printf("%s\n", rt);
    return 0;
}
