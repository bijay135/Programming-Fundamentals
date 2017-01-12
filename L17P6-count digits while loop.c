/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to print total number of digits in a number
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=1;
    printf("Enter your number:\n");
    scanf("%d",&n);
    while(n>9)
    {
        n=n/10;
        count++;
    }
    printf("The total number of digits is %d",count);
    getch();
    return 0;
}

