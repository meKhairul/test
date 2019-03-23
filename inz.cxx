#include<stdio.h>
 int check_prime(int n);
int main()
 {
    int testprime;
    long  int n;
    printf("enter the number:");
	scanf("%ld", &n);
   testprime=check_prime(n);
   if (testprime==1){
   	printf("this is prime number");
   }
   else if (testprime==0){
   	printf("this is not prime number");
   }
   	return 0;
 }
 int check_prime(int n)
{
	int i;
	
	if (n<2){
		return 0;
	}
	if (n==2){
		return 1;
	}
    if (n>2){
    	for (i=n-1;i>=2;i--){
            if (n%i==0){
		      return 0;}
		    else {
		    	return 1;
		}
   }
}