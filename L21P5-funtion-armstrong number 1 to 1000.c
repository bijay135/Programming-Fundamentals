/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 21
Program :WAP to print Armstrong number from 1 to 1000
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int z,a,temp,i,n;
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
            printf("\t%d\t",temp);
        }
    }
    getch();
    return 0;
}

