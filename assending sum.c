#include<stdio.h>
int main()
{
	char data[1000];
	int i,j;
	char temp;
	fgets(data,sizeof data,stdin);
	for (i=0;data[i]!='\0'&& (data[i]=='1' || data[i]=='2' || data[i]=='3' || data[i]=='+');i=i+2){
		temp=data[i];
		for (j=i+2;data[j]!='\0';j=j+2){
			if(temp>data[j]){
				temp=data[j];
				data[j]=data[i];
				data[i]=temp;
			}
			else {
				temp=data[i];
			}
		}
	}
	printf("%s",data);
	
	return 0;
}