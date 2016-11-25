/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 4
Program : Write a C program to ask and print area and volume of sphere
Date: November 21 , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
int main()
{
  float r,area,volume;
  printf("Enter the radius of the sphere:\n");
  scanf("%f",&r);
  area=4*pi*pow(r,2);
  printf("The area of the sphere is : %f\n",area);
  volume=1.33*pi*pow(r,3);
  printf("The volume of sphere is : %f",volume);
  getch();
  return 0;
}
