#include<stdio.h>
int main()
{
	int T,a,b,c,i;
	scanf("%d",&T);
	for (i=1;i<=T;i++){
		printf("Case %d: ",i);
		scanf("%d %d %d",&a,&b,&c);
		if (a>b && a>c){
			printf("%d\n",a);
		}
		if (b>c && b>a){
			printf("%d\n",b);
		}
		if (c>a && c>b){
			printf("%d\n",c);
		}
	}
	
	return 0;
}