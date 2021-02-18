#include<stdio.h>
int main()
{
    int i=2,j,n,z=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d\n",n);
    }
    while(n!=1)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                printf("%d\n",i);
                n/=i;
            }
        }
        i++;
    }
    printf("%d",z);
    return 0;
}
