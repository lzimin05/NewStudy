#include <stdio.h>

int main(int argc, char** argv) {
    printf("\n---------------------\nMenu:\n1-To enter the string\n2-To process the data\n3-To see result\n0-Exit\n---------------------\n");
    char* string1 = "You dont save string!!!";
    while(1) {
	printf("Enter your choise: ");
	int a;
  	scanf("%i", &a);
	if(a == 1) {
	    char* string;
	    scanf("%s", string);
	    printf("Enter your choise: ");
	    scanf("%i", &a);
	    if(a == 2) {
		string1 = string;
	    }
	} else if(a == 3) {
	    printf("%s\n", string1);
	    a = 5;
	} else if(a == 0) {
	    break;
	} else if (a == 2){
	    printf("You dont write string and dont save string!!!\n");
	}
	if(a == 3) {
	    printf("%s\n", string1);
	}
    }

    return 0;
}

