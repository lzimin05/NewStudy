#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <termios.h>
#include <unistd.h>

int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

#define N 20
#define M 30

int main(int argc, char** argv) {
    int x = 10;
    int y = 10;
    int x1 = -1;
    int y1 = 0;
    int score = 0;
    while (true) {  
	srand(time(NULL));
	if (x1 == -1) {
	    x1 = rand() % (N - 2) + 1; 	//яблоко
	    y1 = rand() % (M - 2) + 1;
	}
	char a[N][M];
        int key = -1;
	if (x1 == x && y1 == y) {
	    score++;
	    a[x1][y1] = '0';		//если змейка достигла яблока	
	    x1 = -1;
	}
        system("clear");
    	for(int i = 0; i < N; i++) {
	    for(int j = 0; j < M; j++) {
	    	if (i == 0 || j == 0 || i == N - 1 || j == M - 1) {
	            a[i][j] = '#';
	        } else {						//строительство поля
	       	    a[i][j] = ' ';
	        }
	    	if (i == x && j == y) { 
		    a[i][j] = '@';				//голова змейки
	    	}
		if (i == x1 && j == y1) {
		    a[i][j] = '*';					//размещение яблок
		}
		printf("%c", a[i][j]);
	    }
   	    printf("\n");
    	}
	printf("score: %i\n", score);	//кол-во очков
	if (x == 0 || x == N - 1 || y == 0 || y == M - 1) {
	    break;						//game over
	}
	key = getch();
	if (key == 'w') x--;
	if (key == 's') x++;
	if (key == 'd') y++;				//назначение клавиш
	if (key == 'a') y--;
	if (key == 'e') break;
	system("clear");
    }

    return 0;
}
