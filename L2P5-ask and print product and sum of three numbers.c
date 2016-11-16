/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll No :
Lab Sheet no : 2
Program : Write a C program to print product & sum of three no. asked from user
Date : 16 November , 2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum,product;
printf("Enter first number:\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
printf("Enter third number:\n");
scanf("%d",&c);
sum=a+b+c;
printf("Sum of three no is: %d\n",sum);
getch();
product=a*b*c;
printf("Product of three number is: %d",product);
getch();
}
