#include<stdio.h>
int main(){
	int i=0,quotient,decimalNumber,temp;
	char hexadecimalNumber[20];
	scanf("%d",&decimalNumber);
	quotient = decimalNumber;
	
	while (quotient!=0) {
		temp=quotient%16;
		
		if (temp<10){
		     temp=temp + 48; 
		}
		else {
		     temp=temp + 55;
		}
		hexadecimalNumber[i++]=temp;
		quotient=quotient/16;
	}
	for (i=i-1;i>=0;i--){
		printf("%c",hexadecimalNumber[i]);
	}
	return 0;
}
    