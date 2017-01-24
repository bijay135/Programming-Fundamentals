/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 22
Program :WAP to find factorial using recursion function
Date: January 24 , 2017
*/
#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int n,result;
    printf("Enter your number:\n");
    scanf("%d",&n);
    result=fact(n);
    printf("The factorial of %d is %d",n,result);
    getch();
    return 0;
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}
