/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll NO : 
Lab Sheet : 14
Program : Write a C program to check whether the input is alphabet or not.
Date : 21 December , 2016
*/

#include<stdio.h>
int main()
{
	int n;
	char a;
	printf("Enter your character:\n");
	scanf("%c",&a);
	n=a;
	(n>=65&&n<=90||n>=97&&n<=122)?printf("The given input is a alphabet"):
    printf("The given input is not an alphabet");
	return 0;
}
