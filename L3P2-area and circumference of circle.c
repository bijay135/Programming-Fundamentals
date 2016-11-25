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
void main()
{
  float r,area,circumference;
  printf("Enter radius of the circle:\n");
  scanf("%f",&r);
  area=3.14*r*r;
  printf("Area of circle is: %f\n",area);
  circumference=2*3.14*r;
  printf("Circumference of circle is: %f",circumference);
  getch();
}
