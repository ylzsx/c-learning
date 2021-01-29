#include <stdio.h>
#include <stdlib.h>

int main() {

	int i;
	int ret = 0;
	char ch;
	
	printf("Please enter:\n");

	scanf("%d", &i);
	scanf("%*c%c", &ch);
	printf("i = %d, ch = %c\n", i, ch);

#if 0
	while(1) {
		
		ret = scanf("%d", &i);
		if (ret < 1) {
			fprintf(stderr, "Enter error!\n");
			break;
		}
		printf("i = %d\n", i);
	}
#endif

	exit(0);
}
