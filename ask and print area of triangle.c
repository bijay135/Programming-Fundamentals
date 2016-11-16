/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll No :
Lab Sheet no : 2
Program : Write a program to print area of triangle , base & height asked from users
Date : 16 November , 2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
float b,h,area;
printf("Enter the base of the triangle:\n");
scanf("%f",&b);
printf("Enter the height of the triangle:\n");
scanf("%f",&h);
area=0.5*b*h;
printf("The area of triangle is : %f",area);
getch();
}
