#include<stdio.h>
double cubert(double x);
int main(){
	
	double a, result;
	scanf("%lf", &a);
	result = cubert(a);
	printf("%lf", result);
	return 0;
	
	}
	double cubert(double x){
		
		double cubik_root;
		cubik_root=pow(x,(1.0/3.0));
		return cubik_root;
		}