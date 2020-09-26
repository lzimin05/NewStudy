#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
#define M 30

int main(int argc, char** argv) {
    int x = 10;
    int y = 10;
    int x1 = -1;
    int y1 = 0;
    int score = 0;
    while (N == 20) {  
	srand(time(NULL));
	if (x1 == -1) {
	    x1 = rand() % (N - 2) + 1;
	    y1 = rand() % (M - 2) + 1;
	}
	char a[N][M];
        int key = -1;
	if (x1 == x && y1 == y) {
	    score++;
	    a[x1][y1] = '0';
	    x1 = -1;
	}
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
		if (i == x1 && j == y1) {
		    a[i][j] = '*';
		}
		printf("%c", a[i][j]);
	    }
   	    printf("\n");
    	}
	printf("score: %i\n", score);
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
