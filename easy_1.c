#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

    int number_x;
    printf("введите кол-во x -> ");
    scanf("%i", &number_x);
    float x[number_x];
	for(int i = 0; i < number_x; i++) {
	printf("Введите значение Z, B, A, Betta для X%i\n", i+1);
	float z;
	printf("Z = ");
	scanf("%f", &z);
	float b;
	printf("B = ");
	scanf("%f", &b);
	float a;
	printf("A = ");
	scanf("%f", &a);
	float betta;
	printf("Betta = ");
	scanf("%f", &betta);
  	x[i] = pow(z, 3)-b+pow(a, 2) / pow(tan(betta), 2);
	printf("!%f!", x[i]);
    }
    float y = 0;
    for(int i = 0; i < number_x; i++) {
	y = y + x[i];
    }
    printf("\n%f\n", y);
    return 0;
}
