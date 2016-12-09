/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll NO : 
Lab Sheet NO : 12
Program : Write a C program to find largest among three numbers using ternary operator
Date : December 9 , 2016
*/

#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter your first number:\n");
	scanf("%f",&a);
	printf("Enter your second number:\n");
	scanf("%f",&b);
	printf("Enter your third number:\n");
	scanf("%f",&c);
	(a>=b && a>=c)?printf("The first number %f is the largest",a):
	(b>=c && b>=a)?printf("The second number %f is the largest",b):
	printf("The third number %f is the largest",c);
	return 0;
}
