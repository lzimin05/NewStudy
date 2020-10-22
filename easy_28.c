#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
    printf("Первое уравнение y = ax^2 + bx + c\n");
    float a, b, c;
    printf("a -> ");
    scanf("%f", &a);
    printf("b -> ");
    scanf("%f", &b);
    printf("c -> ");
    scanf("%f", &c);
    printf("Второе уравнение y = dx + x\n");
    float d, k;
    printf("d -> ");
    scanf("%f", &d);
    printf("k -> ");
    scanf("%f", &k);
    float x1, x2, y1, y2;
    x1 = (-(b-d) + sqrt(pow((b-d),2)-4*a*(c-k))) / (2*a);
    x2 = (-(b-d) - sqrt(pow((b-d),2)-4*a*(c-k))) / (2*a);
    y1 = d*x1+k;
    y2 = d*x2+k;
    if(x1 == x2) {
	printf("[%.2f; %.2f]\n", x1, y1);
    } else {
	printf("[%.2f; %.2f] [%.2f; %.2f]\n", x1, y1, x2, y2);
    }
    return 0;
}
