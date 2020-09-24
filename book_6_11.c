#include <stdio.h>

int main(int argc, char** argv) {

    int compactdisk = 650; 
    int tape = 1;
    int disk = 1000;
    int memoryforgame;
    scanf("%i", &memoryforgame);
    if (tape >= memoryforgame) {
	printf("tape\n");
    }   
    if (compactdisk >= memoryforgame) {
	printf("compactdisk\n");
    }  	 
    if (disk >= memoryforgame) {
	printf("disk\n");
    }  
    return 0;
}
