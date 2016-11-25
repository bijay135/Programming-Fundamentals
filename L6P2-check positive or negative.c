/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheer NO : 6
Program : Write a C program to check whether the given number is positive or negative.
Date: November 25 , 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter your number:\n");
scanf("%d",&n);
if (n>0)
{
printf("The number is Positive");
}
else if (n<0)
{
printf("The number is Negative");
}
getch();
return 0;
}
