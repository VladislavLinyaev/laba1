#include <math.h>
#include <stdio.h>

int main() {
	double x = 1, a = 2, ha = 1.3, hx = 1.3;

	for (x = 1; x <= 3; x += hx)
	{
		for (a = 2; a <= 4; a += ha)
		{
			if (x == 0) {
				printf("deleniye na nul! x=0\n");
				return 0;
			}
			double u1 = tan(a / x);
			double u2 = x * sin(a * a); //pow(a,2);
			double u = fmin(u1, u2);
			double z1 = (a * sqrt(fabs(u)));
			double z2 = (sin(a) / x);
			double z = fmin(z1, z2);
			printf("x = %f, a = %f, z(%f,%f) = %f\n", x,a,x,a,z);

		}

	}





	return 0;
}
