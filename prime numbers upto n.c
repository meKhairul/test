#include<stdio.h>
int main()
{
	int n,i,j,m=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		m=0;
		for (j=1;j<=i;j++){
			if(i%j==0){
				m++;
			}
		}
		//printf("%d\n",m);
		if(m==2) {
			printf("%d ",i);
		}	
	}
}