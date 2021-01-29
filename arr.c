#include <stdio.h>
#include <stdlib.h>


static void base_convert(void) {

	int num, base;
	int n[32], i = 0;

	printf("Please enter the converted num:");
	scanf("%d", &num);
	printf("Please enter the base:");
	scanf("%d", &base);

	do {
		n[i] = num % base;
		num = num / base;
		i++;
	} while(num != 0);

	for(i--; i >= 0; i--) {
		if (n[i] >= 10)
			printf("%c", 'A' + n[i] - 10);
		else
			printf("%d", n[i]);
	}
	puts("");
}


static void primer(void) {

	char primer[1001] = {0};
	int i, j;

	for (i = 2; i <= 1000; i++)
		if (primer[i] == 0)
			for (j = i * 2; j <= 1000; j += i)
				primer[j] = -1;

	for (i = 2; i<= 1000; i++)
		if (primer[i] == 0)
			printf("%d ", i);
	puts("");

	return ;
}


int main() {

//	base_convert();
	primer();

	exit(0);
}
