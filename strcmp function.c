#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	gets(a);
	gets(b);
	if (strcmp(a,b)){
		printf("not equal");
	}
	else {
		printf("equal");
	}
	return 0;
}