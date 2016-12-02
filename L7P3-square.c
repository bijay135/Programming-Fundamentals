/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 7
Program : Write a C Program to find square
Date : 28 November , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int n,square;
  printf("Enter your number:\n");
  scanf("%d",&n);
  square=pow(n,2);
  printf("The square of your number is : %d",square);
  getch();
  return 0;
}
