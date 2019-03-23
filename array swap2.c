#include<stdio.h>
int main()
{
	int i, j, t;
	int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	
	for (i=0, j=9;i<j;i++, j--){
		t=a[j];
		a[j]=a[i];
		a[i]=t;}
		for (i=0;i<10;i++){
		printf("%d\n", a[i]);
		}
	return 0;
}