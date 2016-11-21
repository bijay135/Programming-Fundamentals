/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 4
Program : Write a C program to ask and print area of trapezium
Date: November 21 , 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,h,area;
printf("Enter the first side of trapezium:\n");
scanf("%f",&a);
printf("Enter the second side of trapezium:\n");
scanf("%f",&b);
printf("Enter the height of the trapezium:\n");
scanf("%f",&h);
area=0.5*((a+b)*h);
printf("The area of trapezium is : %f",area);
getch();
return 0;
}
