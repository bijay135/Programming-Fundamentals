/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll NO :
Lab Sheet NO : 13
Program : Write a C program to check whether the number is divisible by 5 or 11
Date : December 9 , 2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    if (n%5==0 && n%11==0)
    {
        printf("\nThe number %d is divisible by 5 and 11",n);
    }
    else
    {
        printf("\nThe number is not divisible");
    }
    getch();
    return 0;
}
