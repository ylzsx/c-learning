#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 128

static void count_word(void) {

	char str[STRSIZE];
	int i, flag = 0;
	int count = 0;

	fgets(str, STRSIZE, stdin);

	for (i = 0; str[i] != '\0'; i++) {
	
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			flag = 0;
		else if (flag == 0) {
			flag = 1;
			count++;
		}
	}

	printf("count = %d\n", count);

}


int main() {

	count_word();

	exit(0);
}
