#include <stdio.h>
#include <string.h>
int main()
{
	char c[55]=''gshhHgshH'';
	int i,j;
	int len=strlen(c);
	for(j=0,i=0;i<len;i++,j++){
		if(c[i]>='a' && c[i]<='z' ){
			c[j]=c[i]-'a'+'A';
			}
		if(c[i]>='A' && c[i]<='Z'){
			c[j]=c[i];
		}
			
	}
	printf("%s", c[j]);
	return 0;
}