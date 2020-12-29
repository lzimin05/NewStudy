#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <termios.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <time.h>


struct setting_for_game {
    int colortxt;
    int colorbg;
    int N;
    int M;
};

int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );		//функция перемещения
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

struct snaky {
    int* x;
    int* y;
    int size; //размер змеи
};

struct setting_for_game menu() {
    char sit; //куда заходить
    int colortxt1 = 0; //цвет текста
    int colorbg1 = 0; //цвет фона
    int N1 = 30;
    int M1 = 20;
    while(sit - '0' != 1) {
	printf("\t\e[1;31mSNAKE\e[0m\n");
    	printf("\e[1;34mMenu:\e[0m\n");
	printf("1) Play\n\n2) Setting\n\n3) About the game\n\n");
	printf(">> ");
	sit = getch();
	int sit1;
	if(sit - '0' == 1 || sit - '0' == 2 || sit - '0' == 3) {
	    sit1 = sit - '0';
	} else {
	    sit1 = 4;
	}
	switch(sit1) {
	    case(1):
		system("clear");
		break;
	    case(3):			//about the game
		system("clear");
		char proverka = ' ';
		printf("While it's empty here\n");
		while(proverka != 27) {
		    proverka = getch();
		}
		
		system("clear");
		break;
	    case(2):
		system("clear");
		proverka = ' '; 
		while(proverka != 27) {
		    printf("\e[1;36m\tSetting:\e[0m\n");
		    printf("1) \e[1;34mchange text color\e[0m\n\n2) \e[1;34mchange background color\e[0m\n\n3) \e[1;34mplaying field size\e[0m\n\n>>");		//setting
		    proverka = getch();
		    int proverka1 = 0;
		    if(proverka - '0' == 1 || proverka - '0' == 2 || proverka - '0' == 3) {
		    	proverka1 = proverka - '0';
		    } else {
			proverka1 = 4;
		    }
		    switch (proverka1) {
			case(1):
			    system("clear");
			
			    printf("\e[1;34mChange text color:\e[0m\n\n");
			    printf("0 - white (default)\n\e[30m1 - black\e[0m\n\e[31m2 - red\e[0m\n\e[32m3 - green\e[0m\n\e[34m4 - blue\e[0m\n\e[36m5 - cyan\e[0m\n\e[35m6 - purple\e[0m\n");
			    proverka = ' ';
			    proverka = getch();
			    if(proverka-'0' > 0 && proverka-'0' <= 6) {
				colortxt1 = proverka - '0';
			    } else {
				colortxt1 = 0;
			    }
			    break;
			case(2):
			    system("clear");
			    printf("\e[1;34mChange background color:\e[0m\n\n");
			    printf("\e[47m0 - white (default)\e[0m\n\e[40m1 - black\e[0m\n\e[41m2 - red\e[0m\n\e[42m3 - green\e[0m\n\e[44m4 - blue\e[0m\n\e[46m5 - cyan\e[0m\n\e[45m6 - purple\e[0m\n");
			    proverka = ' ';
			    proverka = getch();
			    if(proverka-'0' >= 0 && proverka-'0' <= 6) {
				colorbg1 = proverka - '0';
			    } else {
				colorbg1 = 0;
			    }
			    break;
			case(3):
			    system("clear");
			    printf("\e[1;34mPlaying field size\e[0m\n\n");
			    printf("1) 30x20\n2) 20x30\n3) 40x30\n");
			    proverka = ' ';
			    proverka = getch();
			    if(proverka - '0' == 1) {
				N1 = 30;
				M1 = 20;
			    }
			    if(proverka - '0' == 2) {
				N1 = 20;
				M1 = 30;
			    }
			    if(proverka - '0' == 3) {
				N1 = 40;
				M1 = 30;
			    }
			    break;
		    	}
		    system("clear");
		break;
	    }
	    default:
		//printf("Error, you dont write correct\n");
		system("clear");
		
 	}
    }
    //printf("%i %i\n%i %i\n",colortxt1, colorbg1, N1, M1);
    struct setting_for_game menu;
    menu.colortxt = colortxt1;
    menu.colorbg = colorbg1;
    menu.N = N1;
    menu.M = M1;
    return menu; 
}

struct setting_for_game costomization (int z, int h) {
    struct setting_for_game costomization;
    switch(z) {
	case(1):
	    costomization.colortxt = 30;
	    break;
	case(2):
	    costomization.colortxt = 31;
	    break;
	case(3):
	    costomization.colortxt = 32;
	    break;
	case(4):
	    costomization.colortxt = 34;
	    break;
	case(5):
	    costomization.colortxt = 36;
	    break;
	case(6):
	    costomization.colortxt = 35;
	    break;
    }
    switch(h) {
	case(1):
	    costomization.colorbg = 40;
	    break;
	case(2):
	    costomization.colorbg = 41;
	    break;
	case(3):
	    costomization.colorbg = 42;
	    break;
	case(4):
	    costomization.colorbg = 44;
	    break;
	case(5):
	    costomization.colorbg = 46;
	    break;
	case(6):
	    costomization.colorbg = 45;
	    break;
    }
    return costomization;
}

struct foood {
    int x;
    int y;
    int pusto; //пустых клеток
    int apple; //яблоко
};

int main(int argc, char** argv) {
    system("clear");
    struct setting_for_game setting = menu();
    setting = costomization(setting.colortxt, setting.colorbg);
    char control = 'w';
    int N = setting.N;
    int M = setting.M;
    //сама игра:
    char a[M][N];
    struct snaky snake;
    snake.size = 0;
    snake.x = (int*) malloc(sizeof(int)*snake.size);
    snake.y = (int*) malloc(sizeof(int)*snake.size);
    snake.x[snake.size] = N/2; 
    snake.y[snake.size] = M/2;

    struct foood food;
    food.x = -1;
    food.y = -1;
    bool proverka = true;
    srand(time(NULL));
    while(proverka) {
	food.pusto = (N-2)*(M-2)-snake.size; //сколько пустого места
	if(food.x == -1) {
	    food.apple = rand() % food.pusto;
	}

	for(int i = 0; i < M; i++) {
	    for(int g = 0; g < N; g++) {
		a[i][g] = ' ';
		if(i == 0 || g == 0 || i == M-1 || g == N-1) {	//растановка обычного поля (без змеи и еды)
		    a[i][g] = '#';
		}
	    }
	}

	for(int size = snake.size; size >= 0; size--) {
	    //printf("%i - %i", snake.x[size], snake.y[size]);
	    for(int i = 0; i < M; i++) {
		for(int g = 0; g < N; g++) {
		    if(snake.x[size] == g && snake.y[size] == i) {
			a[i][g] = '@';
		    }						//змейка
		}
	    }
	}
	for(int i = 0; i < M; i++) {
	    for(int g = 0; g < N; g++) {
		if(a[i][g] == ' ') {
		    if(food.apple > 0) {
		    	food.apple--;
		    } else if (food.apple == 0) {		//змейка и яблоко
		 	food.x = g;
			food.y = i;
			food.apple = -1; //поставили яблоко
		    }
		}
		if(food.x == g && food.y == i) {
		    a[i][g] = '*';
		}

		if(snake.x[0] == food.x && snake.y[0] == food.y && i == food.y && g == food.x) {
		    a[i][g] = '@';
		    snake.size++;		//змейка и яблоко в одной координаты
		    //snake.x[snake.size] = snake.x[snake.size-1];
		    //wsnake.y[snake.size] = snake.y[snake.size-1];
		    food.x = -1;	//делать новое яблоко
		}
		printf("\e[%i;%im%c\e[0m", setting.colortxt, setting.colorbg, a[i][g]);
	    }
	    printf("\n");
	}
	for(int i = snake.size; i > 0; i--) {
	    snake.x[i] = snake.x[i-1];
  	    snake.y[i] = snake.y[i-1];
	}

	control = getch();	

	if(control == 'w') snake.y[0]--;
	if(control == 's') snake.y[0]++;
	if(control == 'd') snake.x[0]++;						//движение змейки
	if(control == 'a') snake.x[0]--;
	if(snake.x[0] == 0 || snake.x[0] == N-1 || snake.y[0] == 0 || snake.y[0] == M-1) {
	    proverka = false;
	    break;
	}
	system("clear");

    } 
    
    printf("\e[1;31mGame Over\e[0m\n");
    return 0;
}

