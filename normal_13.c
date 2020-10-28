#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct date {
    int id;
    char name[10];
    char surname[15];
    char patronymic[15];
    char post[15];
    int pay;
    int hours;

};
/*
int a[0];
for() {
   a[i] = 0;
}
*/
int main(int argc, char** argv) {
    struct date worker[30];
    int  size = -1;
    while(true) {
	char a = 'v';
	printf("n - new worker\nf - find worker\nv - show all workers\n");
	scanf("%c", &a);
	if(a == 'q') {
	    break;
	}
	if(a == 'n') {
	    size++;
	    worker[size].id = size;
	    printf("id: %i\nName: ", worker[size].id);
	    scanf("%s", &worker[size].name);
	    printf("Surname: ");
	    scanf("%s", &worker[size].surname);
	    printf("Patronymic: ");
	    scanf("%s", &worker[size].patronymic);
	    printf("Post: ");
	    scanf("%s", &worker[size]. post);
	    printf("Pay: ");
	    scanf("%i", &worker[size].pay);
	    printf("Hours: ");
	    scanf("%i", &worker[size].hours);
	    system("clear");
	}

        if(a == 'v') {
	    printf(" ID       Name         Surname     Patronymic           Post   h/pay   Hours   Salary\n----------------------------------------------------------------\n");
	    for(int  i = 0; i <= size; i++) {
		printf("%3i ", worker[i].id);
		printf("%10s ", worker[i].name);
		printf("%15s", worker[i].surname);
		printf("%15s", worker[i].patronymic);	
		printf("%15s   %5i   %5i   %7i", worker[i].post, worker[i].pay, worker[i].hours, worker[i].pay*worker[i].hours);
		printf("\n");
	    }
       	}
    }
    return 0;
}
