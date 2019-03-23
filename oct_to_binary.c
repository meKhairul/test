#include<stdio.h>
void oct_to_binary(int num);
int main(){
	int y;
	scanf("%d",&y);
	oct_to_binary(y);
	return 0;
}
void oct_to_binary(int num){
	char a[100];
	int i;
	for (i=0;i<100;i++){
	a[i]=num%8;
	num=num/8;
	if (num==0){
		break;}
	}
	for (;i>=0;i--){
	printf("%d",a[i]);
	}
}