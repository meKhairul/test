#include<stdio.h>
void dec_to_hex(int num);
int main(){
	int y;
	scanf("%d",&y);
	dec_to_hex(y);
	return 0;
}
void dec_to_hex(int num){
	char a[20];
	int r,i;
	for (i=0;i<20;i++){
		r=num%16;
	if (r>=10){
		r=num%16+55;
	}
	else {
		r=num%16+48;
	}
	a[i]=r;
	num=num/16;
	if (num==0){
		break;}
	}
	for (;i>=0;i--){
	printf("%c",a[i]);
	}
}