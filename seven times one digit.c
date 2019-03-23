#include<stdio.h>
int main()
{
	char a[100];
	int i,count1=0;
	scanf("%s", a);
	if(a[i]=='1' || a[i]=='0'){
		for (i=0;a[i]!='\0';i++){
			if (a[i]=='1'){
			count1++;
			}
		}
	}
	if (count1==7){
	printf("YES\n");
	}
	else {
	printf("NO\n");
	}
	return 0;
}