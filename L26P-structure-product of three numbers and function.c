/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 26
Program :WAP find product of three numbers and pass it using function
Date: Feburary 1 , 2017
*/
#include<stdio.h>
#include<conio.h>
struct student{
                int a,b,c;
                int mul;
                }a1;
int main()
{
    printf("Enter first number , second number and third number:\n");
    scanf("%d %d %d",&a1.a,&a1.b,&a1.c);
    a1.mul=a1.a*a1.b*a1.c;
    printf("The multiplication is %d",a1.mul);
}
