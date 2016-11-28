/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheer NO : 7
Program : Write a C Program to use Relational Operations.
Date : 28 November , 2016
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
  a==b;
  printf("Use of == %d\n",a==b);
  a>b;
  printf("Use of > %d\n",a>b);
  a<b;
  printf("Use of < %d\n",a<b);
  a!=b;
  printf("Use of != %d\n",a!=b);
  a>=b;
  printf("Use of >= %d\n",a>=b);
  a<=b;
  printf("Use of <= %d",a<=b);
  getch();
  return 0;
}

