/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to calculate sum of digits
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p,z;
    printf("Enter your number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        z=n%10;
        p=p*z;
        n=n/10;
    }
    printf("The product of digits is %d",p);
    getch();
    return 0;
}

