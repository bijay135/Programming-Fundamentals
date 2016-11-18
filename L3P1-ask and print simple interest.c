/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 3
Program : Write a C program to ask and print Simple Interest
Date: November 18 , 2016
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 float p,t,r,i;
 printf("Enter your P:\n");
 scanf("%f",&p);
 printf("Enter your T:\n");
 scanf("%f",&t);
 printf("Enter your R:\n");
 scanf("%f",&r);
 i=p*t*r/100;
 printf("The Simple Interest is: %f",i);
 getch();
}
