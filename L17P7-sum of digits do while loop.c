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
    int n,sum=0,z=0;
    printf("Enter your number:\n");
    scanf("%d",&n);
    do
    {
        z=n%10;
        sum=sum+z;
        n=n/10;
    }
    while(n>0);
    printf("The sum of digits is %d",sum);
    getch();
    return 0;
}

