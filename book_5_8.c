#include <stdio.h>
#include <stdlib.h>

#define size 100

int main(int argc, char** argv) {
   
    char* firstName = (char*) malloc(size);
    char* middleName = (char*) malloc(size);
    char* lastName = (char*) malloc(size);

    scanf("%s", firstName);
    scanf("%s", middleName);
    scanf("%s", &lastName[0]);

    printf("%s %c. %c.\n", lastName, firstName[0], middleName[0]);

    free(firstName);
    free(middleName);
    free(lastName);

    return 0;
}

