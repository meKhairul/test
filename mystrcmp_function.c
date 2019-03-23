//mystrcmp_function
#include<stdio.h>
int mystrcmp(char [20] , char [20]);
int main()
{
	char a[20],b[20];
	gets(a);
	gets(b);
	int result;
	result=mystrcmp(a,b);
	if (result==1){
	printf("Equal\n");
	}
	if (result==0){
		printf("Not equal\n");
	}
	return 0;
}
int mystrcmp(char x[20],char y[20]){
	for (int i=0;i<20;i++){
		
	if (x[i]==y[i]){
		return 1;}
	else {
		return 0;}
}
}		
				
				