/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 16
Program : WAP to check leap year using ternary
Date : January 8 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the year:\n");
    scanf("%d",&n);
    (n%100==0)?printf("The year is not a leap year"):
    (n%4==0)?printf("The year is a leap year"):
    (n%400==0)?printf("The year is a leap year"):
     printf("The year is not a leap year");
    getch();
    return 0;
}
