#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calculateY(int a[], int number, int y) {
    int Y;
    for(int i = 0; i < number; i++) {
	Y += a[i] * y;
    }
    return (Y + 65) % 100;
}

int main(int argc, char** argv) {
    int number = 15;
    int con[number];
    for(int i = 0; i < number; i++) {
	con[i] = rand() % 100;
    }
    int y[number];
    y[0] = 1;
    //yN = calcY(a, n, yN-1);
    for(int i = 1; i < number; i++) {
	y[i] = calculateY(con, number, y[i-1]);
    }
    float x[number];
    int m = 100;
    for(int i = 1; i < number; i++) {
	x[i] = (float)(y[i] + 1) / m;
	printf("%.2f ", x[i]);
    }
    return 0;
}
