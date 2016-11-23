/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 4
Program : Write a C program to ask and print area and perimeter of rectangle
Date: November 21 , 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
 float l,b,area,perimeter;
 printf("Enter the length of the rectangle:\n");
 scanf("%f",&l);
 printf("Enter the breadth of the rectangle:\n");
 scanf("%f",&b);
 area=l*b;
 printf("The area of the rectangle is : %f\n",area);
 perimeter=2(l+b);
 printf("The perimeter of the rectangle is : %f",perimeter);
 getch();
 return 0;
}
