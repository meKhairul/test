#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,x1,y1,x2,y2;
    float p,q,r,a,b,c,theta,d;
    scanf("%d %d",&x,&y);
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    p=pow((x-x1),2.0)+pow((y-y1),2.0);
    q=pow((x2-x1),2.0)+pow((y2-y1),2.0);
    r=pow((x2-x),2.0)+pow((y2-y),2.0);
    a=sqrt(p);
    b=sqrt(q);
    c=sqrt(r);
    d=(a*a+b*b-c*c)/(2*a*b);
    theta=acos(d);
    printf("%f",theta);
    return 0;
}
