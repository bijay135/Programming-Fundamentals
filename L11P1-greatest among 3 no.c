/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 11
Program : Write a C Program to find greatest number among three
Date : December 7 , 2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    printf("Enter your first number:\n");
    scanf("%f",&a);
    printf("Enter your second number:\n");
    scanf("%f",&b);
    printf("Enter your third number:\n");
    scanf("%f",&c);

    if (a>b && a>c)
    {
        printf("Your first number is greatest");
    }
    else if (b>c && b>a)
    {
        printf("Your second number is greatest");
    }
    else
    {
        printf("Your third number is greatest");

    }
getch();
return 0;

}

