#include<stdio.h>
int square(int );
int main()
{   
    int a, sq;
    scanf("%d", &a);
    sq=square(a);
    printf("%d", sq);
    return 0;
	
	}
	
	int square(int x)
	{
		int y;
		y=x*x;
		return y;
		}