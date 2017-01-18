/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 1
Program :WAP to print fibonacci series upto n terms using function
Date : January 19 , 2017
*/
#include<stdio.h>
#include<conio.h>
void fib(int n);
int main()
{
    int n;
    printf("Enter value of n to print fibonacci series:\n");
    scanf("%d",&n);
    fib(n);
    getch();
    return 0;
}
void fib(int n)
{
    int i,a=0,b=1,z;
    printf("\n %d %d",a,b);
    for(i=2;i<n;i++)
    {
        z=a+b;
        a=b;
        b=z;
        printf(" %d",z);
    }
}

