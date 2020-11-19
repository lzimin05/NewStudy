#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

char* fillString(char* a) {
    int size = 0;
    a = (char*) malloc(sizeof(char)*(size+1));
    while(true) {
	scanf("%c", &a[size]);
 	if(a[size] == '\n' && a[size] != ' ') {
	    break;
	}
	size++;
    }
    return a;
}

int lengthString(char* a) {
    int size = 0;
    while(true) {
	if(a[size] == '\n' && a[size] != ' ') {
	    break;
	}
	size++;
    }
    return size;
}

char* reverseString(char* a) {
    int size = lengthString(a);
    char* b = malloc(sizeof(char)*size);
    for(int i = 0; i < size; i++) {
	b[i] = a[size-i-1];
    }
    return b;
}

int balanceBrackets(char* a) {
    int openround = 0;
    int closeround = 0;
    int openfigur = 0;
    int closefigur = 0;
    int opensqr = 0;
    int closesqr = 0;
    int size = lengthString(a);
    for(int i = 0; i < size; i++) {
	switch(a[i]) {
	    case '(':
		openround++;
	 	break;
	    case ')':
		closeround++;
		break;
	    case '{':
		openfigur++;
		break;
	    case '}':
		closefigur++;
		break;
	    case '[':
		opensqr++;
		break;
	    case ']':
		closesqr++;
		break;
 	}
    }
    if (openround == 0 && closeround == 0 && openfigur == 0 &&
        closefigur == 0 && opensqr == 0 && closesqr == 0) {
	return -1;
    }
    if (openround == closeround && openfigur == closefigur && 
    opensqr == closesqr) {
	return 1;
    }
    return 0;
}

int main(int argc, char** argv) {
    printf("Введите строку для определения её длинны: ");
    char* a = fillString(a);
    int size = lengthString(a);
    printf("Длинна строки = %i\n", size);
    free(a);
    printf("Введите строку, которую необходимо инвертировать: ");
    a = fillString(a);
    char* b = reverseString(a);
    printf("Конвертированная строка = %s\n", b); 
    free(a);
    free(b);
    printf("Введите строку для проверки баланса скобок: ");
    a = fillString(a);    
    int n = balanceBrackets(a);
    switch (n) {
	case(-1):
	    printf("Нету скобок\n");
	    break;
	case(1):
	    printf("Баланс скобок не нарушен\n");
	    break;
	case(0):
	    printf("Баланс скобок нарушен\n");
 	    break;
    }
    return 0;
}
