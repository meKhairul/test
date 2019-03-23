#include<stdio.h>
#include<string.h>
int main()
{
	int T,j,i;
	scanf("%d",&T);
	char a[20],b[20];
	for (j=1;j<=T;j++){
		scanf("%[^n]s",a);
		for (i=0;a[i]!='\0';i++){
			if(a[i]>='a' && a[i]<='z'){
				b[i]=a[i] - 'a' + 'A';
			}
			else {
				b[i]=a[i];
			}
		}
		printf("%s\n",b);
	}
	return 0;
}	
