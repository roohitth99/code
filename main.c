#include <stdio.h>
#include<stdlib.h>
int isprime(int n)
{
    int i;
    if(n==1)
     return 0;
    if(n==2)
     return 1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n,k,r,i,j,count=0,flag=0,flag1=0;
    scanf("%d%d",&n,&k);
    r=n/k;
    for(i=2;i<=n;i++)
    {
        flag=1;
        j=i;
        if(isprime(i))
        {
            while(isprime(j)&&j<=n)
            {
                printf("%d ",j);
                j=j+r;
            }
        if(j>n)
        {
          flag=0;
        }
        flag1=0;
        if(flag==0)
        {
           j=i-r;
           while(!isprime(j)&&j>0)
           j=j-r;
           if(j>0)
           flag1=1;
           if(flag1==0)
           count++;
        }
        printf("\n");
        }
    }
    printf("%d",count);
    return 0;
}
