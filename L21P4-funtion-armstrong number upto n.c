/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 21
Program :WAP to print Armstrong number upto n
Date : January 22 , 2017
*/
#include<stdio.h>
#include<conio.h>
int arm(int n);
int main()
{
    int result,n;
    printf("Enter your number to reverse:\n");
    scanf("%d",&n);
    result=arm(n);
    if(result==1)
        printf("\nThe number is an armstrong");
    else
        printf("\nThe number is not an armstrong");
    getch();
    return 0;
}
int arm(int n)
{
    int z,a=0,temp,G;
    temp=n;
    while(n>0)
    {
        z=n%10;
        a=(z*z*z)+a;
        n=n/10;
    }
    if(temp==a)
    {
        G=1;
        return G;
    }
    else
    {
        G=0;
        return G;
    }
}

