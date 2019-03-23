#include<stdio.h>
#include<string.h>

int main()
{
	int chk=0;
	char inp[101];
	scanf("%s",inp);

	for(int i=0;i<strlen(inp);++i)
		if(inp[i]=='H'||inp[i]=='Q'||inp[i]=='9')
			{++chk; break;}

	if(chk) printf("YES");
	else printf("NO");

	return 0;
}