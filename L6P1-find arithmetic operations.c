/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheer NO : 6
Program : Write a C program to ask and print arithmetic operations.
Date: November 25 , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int a,b,sum,sub,mul,div,mod;
  printf("Enter your first number:\n");
  scanf("%d",&a);
  printf("Enter your second number:\n");
  scanf("%d",&b);
  sum=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  mod=a%b;
  printf("The sum of two numbers is : %d\n",sum);
  printf("The subtraction of two number is : %d\n",sub);
  printf("The multiplication of two number is : %d\n",mul);
  printf("The division of two numbers is : %d\n",div);
  printf("The modulus of two numbers is : %d",mod);
  getch();
  return 0;
}
