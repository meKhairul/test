#include<stdio.h>
extern int mystrlen(char a[]);
	int main(){
		int b;
		char a[20];
		gets(a);
		b=mystrlen(a);
		printf("Length = %d",b);
		return 0;
	}
    int mystrlen(char a[20]){
    	int i=0,len=0;
    	while (a[i]!='\0'){
    		len++;
    		i++;
    	}
    	return len;
    }
		