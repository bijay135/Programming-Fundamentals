/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to calculate product of digits
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,p,z;
    printf("Enter your number:\n");
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        z=n%10;
        p=p*z;
    }
    printf("The product of digits is %d",p);
    getch();
    return 0;
}



