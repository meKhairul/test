#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	char a[m][n];
	for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0)
            {
                a[i][j]='#';
            }
                else
                {
                    a[i][j]='.';
                }

    }
}
for(i=1;i<m;i=i+4)
{
    j=n-1;
    a[i][j]='#';
}
for(i=3;i<m;i=i+4)
{
    j=0;
    a[i][j]='#';
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%c",a[i][j]);
    }
    printf("\n");
}
return 0;

}