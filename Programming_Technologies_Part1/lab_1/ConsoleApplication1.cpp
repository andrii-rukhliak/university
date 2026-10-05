#include <stdio.h>
#include <math.h>

int main() {

	double x, y, z, res;

	printf("Input three double numbers: x, y, z\n");
	scanf_s("%lf %lf %lf", &x, &y, &z);

	res = pow(x, y + z) + sqrt(x + pow(z, y)) - 161.0 * tan(x * z);

	printf("Res = %lf\n", res);

	return 0;
}