#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d\n",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("%d is multiple time\n",a[i]);}
				break;
			}
			break;
		}
		return 0;
	}