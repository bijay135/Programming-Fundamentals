/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheer NO : 8
Program : Write a C Program to use Assignment Numbers
Date : 30 November , 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  printf("Enter your first number:\n");
  scanf("%d",&a);
  printf("Enter your second number:\n");
  scanf("%d",&b);
  a+=b;
  printf("Use of a+=b is : %d\n",a);
  a-=b;
  printf("Use of a-=b is : %d\n",a);
  a*=b;
  printf("Use of a*=b is : %d\n",a);
  a/=b;
  printf("Use of a/=b is : %d",a);
  getch();
  return 0;
}
