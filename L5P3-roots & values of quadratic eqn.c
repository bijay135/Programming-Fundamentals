/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheer NO : 5
Program : Write a c program to ask and print roots of  quadratic equation & it's values
Date: November 23 , 2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2,dis;
printf("Enter the value of a:\n");
scanf("%f",&a);
printf("Enter the value of b:\n");
scanf("%f",&b);
printf("Enter the value of c:\n");
scanf("%f",&c);
dis=(b*b)-(4*a*c);
x1=(-b+sqrt(dis))/(2*a);
printf("The value of x1 is : %f\n",x1);
x2=(-b-sqrt(dis))/(2*a);
printf("The value of x2 is : %f",x2);
getch();
return 0;
}
