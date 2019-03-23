#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	printf("enter a number to check:");
	scanf("%d", &n);
	if(n<2)
	printf("not prime");
	else if(n==2)
	printf("prime");
	else if(n>2){
		for(i=2;i<=sqrt(n);i++){
		if (n%i!=0)
		printf("prime");
		else
		printf("not prime");
		}
	}
	return 0;
}
		
		
	
