#include<stdio.h>
int main()
{
    char ch[150];
    int i,x=0,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        //for(j=0;j<3;j++){
            scanf("%s",ch);
        if(ch[1]=='+'){
            x++;
        }
        if (ch[1]=='-'){
            --x;
        }
    }

    printf("%d\n",x);

    return 0;
}
