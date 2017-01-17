/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 19
Program :WAP to find cube of any number using function
Date : January 15 , 2017
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void cube();
int main()
{
    cube();
    getch();
    return 0;
}
void cube()
{
    int n,cube;
    printf("Enter your number:\n");
    scanf("%d",&n);
    cube=pow(n,3);
    printf("The cube of %d is : %d",n,cube);
}
