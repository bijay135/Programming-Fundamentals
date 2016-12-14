/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll NO :
Lab Sheet NO : 13
Program : Write a C program to swap two variable using third variable
Date : December 9 , 2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter your first number:\n");
    scanf("%d",&a);
    printf("Enter your second number:\n\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("The before swapped value of a is %d\n",temp);
    printf("The before swapped value of b is %d\n\n",a);
    printf("The after swapped value of a is %d\n",a);
    printf("The after swapped value of b is %d",b);
    getch();
    return 0;
}
