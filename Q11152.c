#define PI acos(-1)
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double a, b, c;
	double sunflowers, violates, roses, s;
	while(scanf("%lf %lf %lf", &a, &b, &c)){
		s = (a + b + c) / 2;
		violates = sqrt(s*(s-a)*(s-b)*(s-c));
		sunflowers = pow((a * b * c) / (4 * violates), 2) * PI;
		roses = pow((2 * violates) / (a + b + c), 2) * PI;
		printf("%.4lf %.4lf %.4lf\n", sunflowers - violates, violates - roses, roses);
	}
	return 0;
}