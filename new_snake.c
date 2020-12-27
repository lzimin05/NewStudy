#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <termios.h>
#include <unistd.h>

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


struct setting_for_game menu() {
    char sit; //куда заходить
    int colortxt1 = 0; //цвет текста
    int colorbg1 = 0; //цвет фона
    int N1 = 20;
    int M1 = 30;
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

int main(int argc, char** argv) {
    system("clear");
    struct setting_for_game setting = menu();
    setting = costomization(setting.colortxt, setting.colorbg);
    printf("\e[%i;%im", setting.colortxt, setting.colorbg);
    printf("\n\n%i %i\n%i %i\n", setting.colortxt, setting.colorbg, setting.N, setting.M);
    
    //сама игра:    

    printf("\e[0m");
    return 0;
}

