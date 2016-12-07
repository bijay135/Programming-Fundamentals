/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 11
Program : Write a C Program to find even or odd using Ternary Operator
Date : December 7 , 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    (n%2==0)?printf("The number %d is even",n):printf("The number %d is odd",n);
    getch();
    return 0;
}
