/*计算抛物运动的射程*/
#include<stdio.h>
#include<math.h>
int main()
{
	const double pi = 3.14159;
	const double g = 9.80;
	double v0;
	int theta;
	double R;
	printf("Please input v0 (m/s) and theta (degree):\n");
	scanf_s("%lf%d", &v0, &theta);
	R = v0 * v0 * sin(2 * theta / 180.0 * pi) / g;
	printf("The range is:%.2f (m)\n ", R);
	return 0;


}