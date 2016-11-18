/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 3
Program : Write a C program to ask and print area and circumference of circle
Date: November 18 , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main()
{
float r,area,circumference;
printf("Enter radius of the circle:\n");
scanf("%f",&r);
area=pi*pow(r,2);
printf("Area of circle is: %f\n",area);
circumference=2*pi*r;
printf("Circumference of circle is: %f",circumference);
getch();
}
