#include <stdio.h>
#include <stdlib.h>

#define N 20
#define M 30

int main(int argc, char** argv) {
    int x = 10;
    int y = 10;
    while (N == 20) {      
	char a[N][M];
        int key = -1;
    	for(int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	if (i == 0 || j == 0 || i == N - 1 || j == M - 1) {
	            a[i][j] = '#';
	        } else {
	       	    a[i][j] = ' ';
	        }
	    	if (i == x && j == y) { 
		    a[i][j] = '@';
	    	}
	    	printf("%c", a[i][j]);
	    }
   	    printf("\n");
    	}
	if (x == 0 || x == N - 1 || y == 0 || y == M - 1) {
	    break;
	}
	key = getchar ();
	if (key == 'w') x--;
	if (key == 's') x++;
	if (key == 'd') y++;
	if (key == 'a') y--;
	if (key == 'e') break;
	system("clear");
    }

    return 0;
}
