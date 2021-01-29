#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M	5

int main() {

	char *arr[M] = {"Bb", "Ss", "Cc", "Mm", "Ba"};
	char *tmp = NULL;
	int i, j, k;

	for (i = 0; i < M - 1; i++) {
		k = i;
		for (j = i + 1; j < M; j++)
			if (strcmp(arr[k], arr[j]) > 0)
				k = j;
		if (k != i) {
			tmp = arr[k];
			arr[k] = arr[i];
			arr[i] = tmp;
		}
	}

	for (i = 0; i < M; i++)
		puts(arr[i]);

	exit(0);
}
