#include <stdio.h>

struct date {
    char name[10];
    int year;
};

int main(int argc, char** argv) {
    printf("Enter number people --> ");
    int size;
    scanf("%i", &size);
    struct date persone[size];
    for(int i = 0; i < size; i++) {
  	printf("Enter name %i -> ", i+1);
   	scanf("%s", &persone[i].name);
	printf("Enter year %i -> ", i+1);
	scanf("%i", &persone[i].year);
    }
    for(int i = 0; i < size; i++) {
	printf("%s %i\n", persone[i].name, persone[i].year);
    }
    return 0;
}
