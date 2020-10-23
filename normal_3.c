#include <stdio.h>

int main(int argc, char** argv) {

    int n, m;
    scanf("%i %i", &n, &m);
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
	for(int g = 0; g < m; g++) {
	    printf("a[%i][%i] = ", i+1, g+1);
 	    scanf("%i", &matrix[i][g]);
	}
    }
    printf("Enter number vectors:\n");
    int vec[m];
    for(int i = 0; i < m; i++) {
	printf("vector[%i] = ", i+1);
	scanf("%i", &vec[i]);
    }
    printf("matrix:\n");
    for(int i = 0; i < n; i++) {
	for(int g = 0; g < m; g++) {
	    printf("%i ", matrix[i][g]);
	}
	printf("\n");
    }
    printf("vector:\n");
    for(int i = 0; i < m; i++) {
	printf("%i\n", vec[i]);
    }
    printf("vector result:\n");
    int out[m];
    for(int i = 0; i < n; i++) {
	out[i] = 0;
	for(int g = 0; g < m; g++) {
	    out[i] += matrix[i][g] * vec[g];
	}
 	printf("%i ", out[i]);
    }
    for(int i = 0; i < n; i++) {
	for(int g = 0; g < n; g++) {
	    if(out[i] > out[g] && i != g) {
		int c = out[i];
		out[i] = out[g];
		out[g] = c;
	    }
	}
    }
    printf("\n%i", out[0]);
    return 0;
}
/*
for (int ix = 0; ix < rows; ix++)
    {
        out[ix] = 0;
        for (int jx = 0; jx < columns; jx++)
            out[ix] += matrix[ix][jx] * vector[jx];
    }
*/
