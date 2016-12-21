/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll NO :
Lab Sheet NO : 14
Program : Write a C program to check wheter the input is vowel or not
Date : December 21 , 2016
*/

#include<stdio.h>
int main()
{
	char n;
	printf("Enter any character:\n");
	scanf("%c",&n);
	if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
	{
		printf("The given character is an vowel");
	}
	else
	{ 
		printf("The given character is not an vowel");
	}
	return 0;
}
