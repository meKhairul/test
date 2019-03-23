#include<stdio.h>
double sqr(double x);
int main()
{
	double a;
	double b;
	scanf("%lf", &a);
	b=sqr(a);
	printf("%lf is square of %lf", b, a);
	return 0;
}
double sqr(double x)
{
   double z;
   z=x*x;
   return z;
}