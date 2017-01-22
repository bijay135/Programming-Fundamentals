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
    int i,z,a=0,temp;
    for(i=1;i<=1000;i++)
    {
            a=0;
            temp=i;
        while(i>0)
        {
            z=i%10;
            a=(z*z*z)+a;
            i=i/10;
        }
        if(temp==a)
        {
            printf("%d ",a);
        }
    }
    getch();
    return 0;
}



