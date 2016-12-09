/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll NO : 
Lab Sheet NO : 12
Program : Write a C program to find largest among two numbers using ternary operator
Date : December 9 , 2016
*/

#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter your first number:\n");
	scanf("%f",&a);
	printf("Enter your second number:\n");
	scanf("%f",&b);
	(a>=b)?printf("The first number %f is the largest",a):printf("The second number %f is the largest",b);
	return 0;
}
