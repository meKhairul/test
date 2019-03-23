#include<stdio.h>
int main()
{
	char a[20]="din";
	int count=0;
	for (int i=0;a[i]!='\0';i++){
		if(a[i]=='k'){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}