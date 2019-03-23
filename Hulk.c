#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="I hate ";
	char b[]="I love ";
	char c[]="that ";
	char d[]="it ";
	int i,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i%2!=0){
			printf("%s",a);
			if (n==i){
				printf("%s",d);
			}
			else {
				printf("%s",c);
			}
		}
		else {
			printf("%s",b);
			if(n==i){
				printf("%s",d);
			}
			else {
				printf("%s",c);
			}
		}
	}
}