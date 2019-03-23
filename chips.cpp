#include<stdio.h>
#include<math.h>
int main()
{ 
	int n,m,i=1; 
	scanf("%d%d",&n,&m); 
	while(m>-1)
	{ if(m>=i)
	{ m=m-i; } 
	else
	{ 
		printf("%d",m); 
		break; 
	} 
	i++; 
	if(i==n+1)
	{ i=1; 
	}
	}
}