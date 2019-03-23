#include<stdio.h>
void dec_to_binary(int num);
int main(){
	int y,d;
	scanf("%d",&y);
	dec_to_binary(y);
	return 0;
}
void dec_to_binary(int num){
	int a[100];
	int i;
	for (i=0;i<100;i++){
	a[i]=num%2;
	num=num/2;
	if (num==0){
		break;}
	}
	for (;i>=0;i--){
	printf("%d",a[i]);
	}
}
	