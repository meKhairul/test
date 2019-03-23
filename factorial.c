#include<stdio.h>
int main()
{
	int n, fact=1, i;
	printf("enter the fact number:");
	scanf("%d", &n);
	if(n>=0){
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("%d! = %d", n, fact);}
	else
	printf("invalid");
	return 0;
}
	