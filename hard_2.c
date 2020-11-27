#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int* fillArray(int* a, int size) {
    srand(time(NULL));
    for(int i = 0; i < size; i++) {
	a[i] = rand() % 1000 + 1;
    }
    return a;
}
void printArray(int* a, int size) {
    for(int i = 0; i < size; i++) {
	printf("%i ", a[i]);
    }
    printf("\n\n");
}

int minArray(int* a, int size) {
    int min = INT_MAX;
    for(int i = 0; i < size; i++) {
	if(min > a[i]) {
	    min = a[i];
	}
    }
    return min;
}

int sortArray1(int* a, int size) {
    //вставить сюда счетчик!!!
    int* c = (int*) malloc(sizeof(int)*size);
    for(int i = 0; i < size; i++) {
	c[i] = a[i];
    }
    int startTime = clock();
    int min = minArray(a, size);
    int k = -1; //тут будет место мин. знач.
    for(int i = 0; i < size; i++) {
	if(c[i] == min) {
	    c[i] = 0;
	    k = i;
	    break;
	}
    }
    while(k != size-1) {
	c[k] = c[k+1];
	k++;
    }
    c[size-1] = min;
    int endTime = clock();
    printArray(c, size);
    int searchTime = endTime - startTime;
    return searchTime;
}

int sortArray2(int* a, int size) {
    int* c = (int*) malloc(sizeof(int)*size);
    int left = 0; //слева от скок отойти
    int right = size; //справа от скок отойти
    for(int  i = 0; i < size; i++) {
	c[i] = a[i];
    }
    int startTime = clock();
    while(1) {
   	int i = 0;
	for(int i = left; i < right; i++) { //слево направо
	    if(c[i] > c[i+1]) {
		int z = c[i];
		c[i] = c[i+1];
		c[i+1] = z;
 	    }
  	}
	right--;
	for(int i = right; i >= left; i--) {
	    if(c[i] < c[i-1]) {
		int z = c[i];
		c[i] = c[i-1];
		c[i-1] = z;
	    }
   	} 
	left++;
	if(left >= right) {
	    break;
	}    
    }    
    int endTime = clock();
    printArray(c, size);
    int searchTime = endTime-startTime;
    return searchTime;
}

int main(int argc, char** argv) {
    int size;
    scanf("%i", &size);
    int* a = (int*) malloc(sizeof(int)*size);
    a = fillArray(a, size);
    printArray(a, size);
    int Time1 = sortArray1(a, size);
    printf("Проверка цельности массива: ");
    printArray(a, size);
    int Time2 = sortArray2(a, size);
    printf("Время сортировка выбором - %i\nВремя сортировка шейкером - %i\n", Time1, Time2);
    if(Time1 < Time2) {
	printf("Сортировка выбором лучше!\n");
    } else {
	printf("Шейкер сортировка лучше!\n");
    }
    return 0;
}
