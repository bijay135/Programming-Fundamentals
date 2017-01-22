#include<stdio.h>
int main()
{
    int z,a=0,temp,i,n;
    for(i=1;i<=1000;i++)
    {
        a=0;
        n=i;
        temp=i;
        while(n>0)
        {
            z=n%10;
            a=(z*z*z)+a;
            n=n/10;
        }
        if(temp==a)
        {
            printf("   %d \n",temp);
        }
}
    return 0;
}
