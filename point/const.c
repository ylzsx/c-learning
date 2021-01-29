#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 1;
	int *const p = &i;
	
	*p = 10;
	printf("%d\n", *p);

#if 0
	int i = 1;
	const int *p = &i;

//T	i = 10;
//F	*p = 10;

	printf("%d\n", *p);

#endif

#if 0
	const int a = 3;
	int *p = &a;
	
	*p = 4;

	printf("%d\n", a);
#endif

	exit(0);
}
