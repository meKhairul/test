#include<stdio.h>
int main()
{
	int i,j;
	int arr[10][3];
	for (i=0;i<10;i++){
		for (j=0;j<2;j++){
			printf("Enter the value of arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);}	
		printf("\n");
		}
		
	for (i=0;i<10;i++){
		for (j=0;j<1;j++){		
		arr[i][j+2]=arr[i][j]+arr[i][j+1];
		printf("%d + %d =  %d ",arr[i][j],arr[i][j+1],arr[i][j+2]);
		}
		printf("\n");
		}	
	return 0;
	}