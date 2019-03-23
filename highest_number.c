#include<stdio.h>
int main()
{
	int T,A,B,C,max;
	scanf("%d",&T);
	for (int i=1;i<=T;i++){
		scanf("%d %d %d",&A,&B,&C);
		if (A>B && A>C){
			max=A;
		}
		else if(B>A && B>C){
			max=B;
		}
		else {
			max=C;
		}
		printf("Case %d:%d\n",i,max);
	}
	return 0;
}
	