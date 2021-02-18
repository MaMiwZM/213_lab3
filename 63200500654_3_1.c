#include<stdio.h>
int main()
{
    int count,i,j,x=0,k=0,l=0;
    for(i=1;i<=5;i++)
    {
        count=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&k);
            count+=k;
        }
        if(count>x)
        {
            x=count;
            l=i;
        }
    }
    printf("%d %d \n",l,x);
    return 0;
}
