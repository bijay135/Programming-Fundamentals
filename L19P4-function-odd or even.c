/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 19
Program :WAP odd or even using function
Date : January 15 , 2017
*/
#include<stdio.h>
#include<conio.h>
int OorE(int n);
int main()
{
    int n,result;
    printf("Enter your number:\n");
    scanf("%d",&n);
    result=OorE(n);
    if(result==1)
        printf("Number is Even");
    if(result==2)
        printf("Number is Odd");
    getch();
    return 0;
}
int OorE(int n)
{
    int z;
    if(n%2==0)
    {
        z=1;
        return z;
    }
    else if(n%2==1)
    {
        z=2;
        return z;
    }
}
