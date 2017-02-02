/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 26
Program :WAP to add two numbers and pass it using function
Date: Feburary 1 , 2017
*/
#include<stdio.h>
#include<conio.h>
struct number{
              int a,b;
              }n1;
void mul(int x,int y);
int main()
{
    printf("Enter first number and second number:\n");
    scanf("%d %d",&n1.a,&n1.b);
    mul(n1.a,n1.b);
}
void mul(int x,int y)
{
    int a;
    a=x+y;
    printf("\nThe sum is %d",a);
}
