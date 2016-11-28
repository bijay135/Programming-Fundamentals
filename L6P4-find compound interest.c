/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 6
Program : Write a C program to find Compound Interest.
Date : November 25 , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  float p,t,r,ci;
  printf("Enter your principle:\n");
  scanf("%f",&p);
  printf("Enter your time:\n");
  scanf("%f",&t);
  printf("Enter your Rate:\n");
  scanf("%f",&r);
  ci=(p*pow((1+r/100),t)-1);
  printf("The Compound Interest is : %f",ci);
  getch();
  return 0;
}
