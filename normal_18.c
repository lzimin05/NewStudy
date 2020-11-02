#include <stdio.h>

int plase(int salary) {
    int n = 0;
    if(salary <= 500) {
	n = 0;
    }
    if (salary > 500) {
	n = 1;
    }
    if (salary > 2000) {
	n = 2;
    }
    if (salary > 5000) {
	n = 3;
    }
    return n;
}

int main(int argc, char** argv) {    
    int salary;
    scanf("%i", &salary);
    int set = plase(salary);
    switch (set) {
	case (0):
	    salary = salary * 0.05;
	    break;
	case (1):
	    salary = salary * 0.1;
	    break;
	case (2):
	    salary = salary * 0.13;
	    break;
	case (3):
	    salary = salary * 0.20;
	    break;
    }
    printf("%i\n", salary);
    return 0;
}
