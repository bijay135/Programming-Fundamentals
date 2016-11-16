/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet No :2
Program : Write a C program to print product of two no. asked from users
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,product;
 printf("Enter first number:\n");
 scanf("%d",&a);
 printf("Enter second number:\n");
 scanf("%d",&b);
 product=a*b;
 printf("Product of two number is : %d",product);
 getch();
}
