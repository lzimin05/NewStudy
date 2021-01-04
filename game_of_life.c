#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 100 // --->
#define M 20 //  |

int** randomTable(int** a) {
    srand(time(NULL));
    for(int i = 0; i < M; i++) {
	for(int g = 0; g < N; g++) {
	    a[i][g] = rand() % 2;
	}
    }
    return a;
}

void printTable(int** a) {
    for(int i = 0; i < M; i++) {
	for(int g = 0; g < N; g++) {
	    if(a[i][g] == 0) {
		printf(" ");
	    } else {
		printf("#");
	    }
	}
	printf("\n");
    }
}

/*int proverkaTable(int i1, int g1, int** a) {
    
    int sum = 0;
    for(int i = -1; i <= 1; i++) {
	for(int g = -1; g <= 1; g++) {
	    if(g == 0 && i == 0) {

	    } else if(i1+i >= 0 && i1+i <= M-1 && g1+g >= 0 && g1+g <= N-1){
		if(a[i1+i][g1+g] == 1) {
		    sum++;
		} 
	    }
	} 
    }
    int returnn = a[i][g];
    if(returnn == 1) {
	if(sum == 2 || sum == 3) {
	    returnn = 1;

        } else {
	    returnn = 0;
	}
    } else if (returnn == 0) {
	if(sum == 3) {
	    returnn = 1;
	}
    }
    return returnn;
}
*/
int main(int argc, char** argv) {
    system("clear");

    int** a = (int**) malloc(sizeof(int)*N*M);
    for(int i = 0; i < M; i++) {
	a[i] = (int*) malloc(sizeof(int)*N);
    }
    
    a = randomTable(a);

    while(true) {
	printTable(a);
	
	/*int** b = (int**) malloc(sizeof(int)*N*M);
    	for(int i = 0; i < M; i++) {
	    b[i] = (int*) malloc(sizeof(int)*N);
    	}
	b = a;
	*/
	int b[M][N];
	for(int i = 0; i < M; i++) {
	    for(int g = 0; g < N; g++) {
		int sum = 0;
		for(int i1 = -1; i1 <= 1; i1++) {
		    for(int g1 = -1; g1 <= 1; g1++) {
			if(g1 == 0 && i1 == 0) {
			} else {
			if(i1+i >= 0 && i1+i < M && g1+g >= 0 && g1+g < N) {
			    if(a[i1+i][g1+g] == 1) {
				sum++;
			    }
			}
			}
		    }
		}
		
		if(a[i][g] == 1) {
		    if(sum == 2 || sum == 3) {
			b[i][g] = 1;
		    } else {
			b[i][g] = 0;
		    }
		} else if(a[i][g] == 0) {
		    if(sum == 3) {
			b[i][g] = 1;
		    } else {
			b[i][g] = 0;
		    }
		}
		
	    }
	}
	for(int i = 0; i < M; i++) {
	    for(int g = 0; g < N; g++) {
		a[i][g] = b[i][g];
	    }
	}
	for(double  i = 0; i < 1000000; i = i + 0.005) {

 	}
	system("clear");
    }
    return 0;
}
