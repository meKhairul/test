/*print the nearest integer value of a square root number*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,n;
	scanf("%d",&n);
	x=sqrt(n);
	float y;
	y=sqrt(n);
	if ((x+.5)<=y){
		x++;
		printf("%d",x);
	}
	else
	printf("%d",x);
	return 0;
}
	