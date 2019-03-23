#include<stdio.h>
int main()
{
	int n,i,j,y=0;
	printf("enter the highest value:");
	scanf("%d",&n);
	printf("prime numbers are:");
	for (i=1;i<=n;i++){
		for (j=1;j<=i;j++){
			if (i%j==0)
			y++;
			if (y==2){
				printf("%d\t",i);}
		}
	}
	return 0;
	}