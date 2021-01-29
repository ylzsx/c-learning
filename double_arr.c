#include <stdio.h>
#include <stdlib.h>

#define M	2
#define N	3
#define K	2

static void mul(void) {

	int a[M][N] = {1, 2, 3, 4, 5, 6};
	int b[N][K] = {1, 0, 0, 1, 1, 0};
	int c[M][K] = {0};
	int i, j, k;

	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
		    for (k = 0; k < K; k++)
				c[i][k] += a[i][j] * b[j][k];

	for (i = 0; i < M; i++) {	
		for (j = 0; j < K; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}

}


int main() {


	mul();

	exit(0);
}
