#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("Enter the number of rows: ");
    int rows;
    scanf("%i", &rows);
    printf("Enter the number of columns: ");
    int columns;
    scanf("%i", &columns);
    int a[rows][columns];
    for(int i = 0; i < rows; i++) {
    	for(int g = 0; g < columns; g++) {
	    scanf("%i", &a[i][g]);
	}
    }
    for(int i = 0; i < columns; i++) {
	int sum = 0;
	for(int g = 0; g < rows; g++) {
	    if(a[g][i] < 0) {
		sum = -1;		
		break;
	    } 
	    sum = sum + a[g][i];
	}
 	if(sum != -1) {
	    printf("\n%i\n ", sum);
	}
    }

    return 0;
}
