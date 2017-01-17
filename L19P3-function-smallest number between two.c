/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 19
Program :WAP to display smallest number between two using function
Date : January 15 , 2017
*/
#include<stdio.h>
#include<conio.h>
int small();
int main()
{
    int result;
    result=small();
    printf("The smallest number is %d",result);
    getch();
    return 0;
}
int small()
{
    int a,b;
    printf("Enter your first number:\n");
    scanf("%d",&a);
    printf("Enter your second number:\n");
    scanf("%d",&b);
    if(a<b)
       return a;
    else
        return b;
}
