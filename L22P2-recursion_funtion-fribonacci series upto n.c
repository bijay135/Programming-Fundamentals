/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 22
Program :WAP to find Fibonacci series  using recursion function
Date: January 24 , 2017
*/
#include<stdio.h>
#include<conio.h>
int fibonacci(int n);
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d\t",fibonacci(i));
    }
    getch();
    return 0;
}
int fibonacci(int i)
{
    if(i==0) return 0;
    if(i==1) return 1;
    return fibonacci(i-1)+fibonacci(i-2);
}
