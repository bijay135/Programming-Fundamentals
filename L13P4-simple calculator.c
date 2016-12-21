/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll NO :
Lab Sheet NO : 13
Program : Write a C program to create simple calculator
Date : December 9 , 2016
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int a,b,c,n;
    printf("\t##################Simple Calculator######################");
    printf("\n\t#\t\tChoose from the menu\t\t\t#");
    printf("\n\t#\t1 Addition \t\t 2 Subtraction\t\t#");
    printf("\n\t#\t3 Multiplication \t 4 Division\t\t#");
    printf("\n\t#                         5 exit                        #");
    printf("\n\t#########################################################");
    printf("\n\nChoose any Number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("\nEnter first number:\n");
        scanf("%d",&a);
        printf("Enter second number:\n");
        scanf("%d",&b);
        c=a+b;
        printf("\nThe sum is %d",c);
        break;
    case 2:
        printf("\nEnter first number:\n");
        scanf("%d",&a);
        printf("Enter second number:\n");
        scanf("%d",&b);
        c=a-b;
        printf("\nThe difference is %d",c);
        break;
    case 3:
        printf("\nEnter first number:\n");
        scanf("%d",&a);
        printf("Enter second number:\n");
        scanf("%d",&b);
        c=a*b;
        printf("\nThe multiplication is %d",c);
        break;
    case 4:
        printf("\nEnter first number:\n");
        scanf("%d",&a);
        printf("Enter second number:\n");
        scanf("%d",&b);
        c=a/b;
        printf("\nThe division is %d",c);
        break;
        default:
            printf("\t\t\tThank you for visiting");
       
    }
     getch();
     return 0;
}
