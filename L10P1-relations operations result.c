/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 10
Program : Write a C Program to use Relational operations
Date : December 2 , 2016
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float n;
    printf("Enter your percentage:\n");
    scanf("%f",&n);
    if (n>=40)
    {
        printf("You have passed\n");
        if (n>=80)
        {
            printf("Distinction\n");
        }
        if (n>=60)
        {
            printf("First Division\n");
        }
        if (n>=50)
        {
            printf("Second Division\n");
        }
        if (n>=40)
        {
            printf("Third Division\n");
        }
    }
    if (n<35)
    {
        printf("You have failed");
    }

    getch();
    return 0;
}
