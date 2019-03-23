#include<stdio.h>
int main()
{
	int i, j;
	int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int a2[10];
	for (i=0, j=9;i<10;i++, j--){
		a2[j]=a[i];
		}
		for (i=0;i<10;i++){
			a[i]=a2[i];
			}
	for(i=0;i<10;i++){
		
		printf("%d\n", a[i]);
		}
	return 0;
}