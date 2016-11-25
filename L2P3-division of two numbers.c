/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet No : 2
Program : Write a C program to print and divide two no. asked from users
Date : 16 November , 2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,division;
  printf("Enter first number\n");
  scanf("%f",&a);
  printf("Enter second number\n");
  scanf("%f",&b);
  division=a/b;
  printf("Division of two numbers is : %f",division);
  getch();
}
