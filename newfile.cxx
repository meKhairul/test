#include<stdio.h>
int check_prime(int )
{
	int n, i, result;
	for(i=2;i<=n-1;i++)
	{  if(n<2){
   result=0;}
	else if(n==2){
	result=1;}
	else if (n%i==0){
	result=0;}
	else
	{result=1;}
}
        int main()
 {      int result, x;
        scanf("%d", &x);
        result=check_prime(x);
        if(result==1){
        printf("this is a prime number");
        }
        if(result==0){
        	printf("this isn't a prime number");
        	}
        return 0;
 }