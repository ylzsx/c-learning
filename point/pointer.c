#include <stdio.h>
#include <stdlib.h>

int main() {

	int a[3];
	int *p = a;
	int i;

	for (i = 0; i < sizeof(a) / sizeof(*a); i++)
		printf("%p --> %d\n", &a[i], a[i]);

	for (i = 0; i < sizeof(a) / sizeof(*a); i++)
		scanf("%d", p++);

//	printf("p = %p, *p = %d\n", p, *p);
	p = a;

	for (i = 0; i < sizeof(a) / sizeof(*a); i++, p++) 
		printf("%p --> %d\n", p, *p);
#if 0
	int i = 127;
	char *p = &i;

	printf("&i = %p\n", &i);
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
#endif
	exit(0);
}
