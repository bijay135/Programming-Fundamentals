/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 27
Program :WAP to print memory location and value of a variable
Date: Feburary 2 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int age=50;
    int *p=&age;
    printf("\nThe value of age is %d",*p);
    printf("\nThe address of age is %d",p);
    getch();
    return 0;
}
