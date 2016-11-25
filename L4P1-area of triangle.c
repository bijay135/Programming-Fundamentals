/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 4
Program : Write a C program to ask and print area of triangle
Date: November 21 , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  float a,b,c,s,area;
  printf("Enter the first side of triangle:\n");
  scanf("%f",&a);
  printf("Enter the second side of the triangle:\n");
  scanf("%f",&b);
  printf("Enter the third side of the triangle:\n");
  scanf("%f",&c);
  s=a+b+c/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("The area of triangle is : %f",area);
  getch();
  return 0;
}
