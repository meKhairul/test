#include<stdio.h>
int main(){
	int N, n, result;
	printf("Enter the highest number:");
	scanf("%d", &N);
	printf("Prime numbers from 1-%d are:",N);
	for (int i=2;i<=N;i++)
	{
	n=i, result=1;
	for (int j=2;j<=n-1;j++)
	{
	if (n%j==0)
	{
	result=0;
	break;}
	}
	if (result==1)
	printf("%d\t",n);
    	}
    return 0;
	}