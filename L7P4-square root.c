/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 7
Program : Write a C Program to find square root
Date : 28 November , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int n,sr;
  printf("Enter your number:\n");
  scanf("%d",&n);
  sr=sqrt(n);
  printf("The square of your number is : %d",sr);
  getch();
  return 0;
}
