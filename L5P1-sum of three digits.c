/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 5
Program : Write a C program to ask and print sum of digits of three digit numbers
Date: November 23 , 2016
*/
#include<stdio.h>
int main()
{
  int a,b,c,sum;
  printf("Enter the first number:\n");
  scanf("%d",&a);
  printf("Enter the second number:\n");
  scanf("%d",&b);
  printf("Enter the third nuber:\n");
  scanf("%d",&c);
  sum=a+b+c;
  printf("The sum of three digits is : %d",sum);
  return 0;
}
