#include <stdio.h>

struct Worker {
    char name[10];
    int exp;
    int hours;
    int primaryhour;
    int primary;
    float premia;
};

int main(int argc, char** argv) {
    struct Worker men;
    printf("Enter name --> ");
    scanf("%s", men.name);
    printf("Enter experience --> ");
    scanf("%i", &men.exp);
    printf("Enter worker's hourly wag --> ");
    scanf("%i", &men.primaryhour);
    printf("Enter how much hours %s has worker --> ", men.name);
    scanf("%i", &men.hours);
    men.primary = men.primaryhour*men.hours;
    if(men.exp == 1) {
	men.premia = 0;
    }
    if(men.exp > 1 && men.exp <= 3) {
	men.premia = men.primary*0.05;
    }
    if(men.exp > 3 && men.exp <= 5) {
	men.premia = men.primary*0.08;
    }
    if(men.exp > 5) {
	men.premia = men.primary*0.15;
    }
    printf("%s\nExperience is %i\nHourly wage is %i\n%s has worked %i hours\nSalary is %i\nPremy is %.2f\n", men.name, men.exp, men.primaryhour, men.name, men.hours, men.primary, men.premia);
}
