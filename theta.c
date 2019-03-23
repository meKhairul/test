#include<stdio.h>
#include<math.h>
int main()
{
	float theta;
	float x,y,x1,y1,x2,y2,a,b,c,d;
	scanf("%f %f",&x,&y);
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	
	a=sqrt(pow((x-x1),2)+pow((y-y1),2));
b=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
c=sqrt(pow((x-x2),2)+pow((y-y2),2));
	d=(a*a+b*b-c*c)/(2*a*b);
	theta=acos(d);
	printf("%f°",theta);
	return 0;
}
