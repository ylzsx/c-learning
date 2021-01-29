#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WEIGHT	(3.0E-23)
#define QUART	(950)

static void water(void) {

	float num;
	double sum;

	printf("Please input for num:\n");
	scanf("%f", &num);

	sum = num * QUART / WEIGHT;

	printf("total is %le\n", sum);

	return ;
}


static void area(void) {

	float a, b, c;
	float s, area;

	printf("Please input:");
	scanf("%f%f%f", &a, &b, &c);

	if (a + b <= c || b + c <= a || a + c <= b) {
		fprintf(stderr, "EINVAL\n");
		exit(1);
	}

	s = 1.0 / 2 * (a + b + c);
	area = sqrt(s * (s - a) * (s - b) * (s - c));

	printf("area = %f\n", area);

	return ;
}

int main() {

//	water();	

//	area();


	exit(0);
}
