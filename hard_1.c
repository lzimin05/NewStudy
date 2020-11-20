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

void switchforbrackets(int n) {
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
}

int occurenceSubstring(char* a, char* b) {
    int sizeA = lengthString(a);
    int n = 0;
    for(int  i = 0; i < sizeA; i++) {
	if(a[i] == b[0]) {
	    int sizeB = lengthString(b);
 	    int g = 0;
	    int i1 = i;
	    bool proverka = true;
	    while(g < sizeB) {
		if(a[i1] != b[g]) {
		    proverka = false;
		    break;
		}		
		g++;
		i1++;
	    }
	    if(proverka) {
		return i+1;
 	    }
    	}
    }
    return -1;
}

char* insertnString(char* a, char* b, int n) {
    int size = lengthString(a);
    if(size < n) {
	char* c = "Error!!!";
   	return c;
    }  
    size = size + lengthString(b);
    char* c = malloc(sizeof(char)*size);
    int i = 0;
    while(n-i-1 != 0) {
	c[i] = a[i];	
	i++;
    }
    int size1 = lengthString(b);
    size1--;
    int i1 = 0;
    while(size1 >= 0) {
	c[i] = b[i1];
	i1++;
	i++;
	size1--;
    } 
    n--;
    while(n <= size-1) {
 	c[i] = a[n];
	n++;
	i++;
    }
    return c;
}

char* cutString(char* a, int size, int n) {
    int proverka = lengthString(a);
    if(proverka < size+n-1) {
	char* b = "Error";
 	return b;
    }
    int i1 = 0;
    char* b = malloc(sizeof(char)*size);
    for(int i = n-1; i < size+n-1; i++) {
	b[i1] = a[i];
	i1++;
    }
    return b;
}

int main(int argc, char** argv) {
    printf("\nВведите строку для определения её длинны: ");
    char* a = fillString(a);
    int size = lengthString(a);
    printf("Длинна строки = %i\n\n", size);
    free(a);

    printf("Введите строку, которую необходимо инвертировать: ");
    a = fillString(a);
    char* b = reverseString(a);
    printf("Конвертированная строка = %s\n\n", b); 
    free(a);
    free(b);

    printf("Введите строку для проверки баланса скобок: ");
    a = fillString(a);    
    int n = balanceBrackets(a);
    switchforbrackets(n);
    free(a);

    printf("\nВведите строку для получения позиции подстроки: ");
    a = fillString(a);
    printf("Введите подстроку: ");
    b = fillString(b);
    n = occurenceSubstring(a, b);
    if(n == -1) {
	printf("В строке нету такой подстроки\n");
    } else {
	printf("Номер позиции = %i\n\n", n);
    }
    free(a);
    free(b);
    
    printf("Введите первую строку для конкатенации: ");
    a = fillString(a);
    printf("Введите вторую строку для конкатенации: ");
    b = fillString(b);
    printf("Введите позицию для вставляемой строки: ");
    scanf("%i", &n);
    char* c = insertnString(a, b, n);
    printf("%s\n\n", c);
    free(a);
    free(b);
    free(c);
    
    printf("Введите строку из которой необходимо скопировать n символов: ");
    a = fillString(a);
    printf("Введите длину копируемой строки: ");
    scanf("%i", &size);
    printf("Введите номер позиции, начиная с которой необходимо скопировать строку: ");
    scanf("%i", &n);    
    b = cutString(a, size, n);
    printf("%s\n", b);
    free(a);
    free(b);
    
    return 0;
}
