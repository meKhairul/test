//mystrcpy_function
#include<stdio.h>
char mystrcpy(char [],char []);
int main()
{
	char a[20];
	mystrcpy(a,"khairul");
	printf("%s\n",a);
	return 0;
	
}
char mystrcpy(char x[20],char y[20])
{
	for (int i=0,j=0;i<20,j<20;i++,j++){
			x[i]=y[j];
	}
	for(int i=0;i<20;i++){	
	return x[i];
	}
}
