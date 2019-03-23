#include<stdio.h>
#include <string.h>
int main()
{
	int len;
	char a[20];
	gets(a);
	len=strlen(a);
	printf("Length = %d\n",len);
	return 0;
}
	