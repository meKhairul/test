#include<stdio.h>
#include<math.h>
int checkprime(int x);
int main(){
	int x;
	int testprime=checkprime(x);
	return 0;
}
int checkprime(int x){
	int n, i;
	printf("enter the number to check prime or not:");
	scanf("%d", &n);
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
		printf("this isn't prime");
		break;}
		if(n%i !=0)
		printf("this is prime");
		break;
}
}
		