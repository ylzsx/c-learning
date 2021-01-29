#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

#if 0
	char str[] = "hello";
	*str = 'w';
	*(str+1) = 'h';
	printf("%d\n", *str);
	puts(str);

#endif

#if 1
	char *str = "hello";
	str = "world";
//	strcpy(str, "");
	puts(str);	
#endif

#if 0
	int a[2][3] = {1, 2, 3, 4, 5,6};
	int (*p)[3] = a;
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) 
			printf("%p -> %d\n", *(p+i)+j, *(*(p+i)+j));
		printf("\n");
	}
#endif


#if 0
	int *p = (int [3]){1, 2, 3};
	int i;

	for (i = 0; i < 3; i++, p++)
		printf("%p --> %d\n", p, *p);

#endif

	exit(0);
}
