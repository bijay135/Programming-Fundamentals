/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to print first and last digit of a number
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,z;
    printf("Enter your number:\n");
    scanf("%d",&n);
    z=n%10;
    do
    {
        n=n/10;
    }
    while(n>9);
    printf("The first digit is %d and the last digit is %d",n,z);
    getch();
    return 0;
}

