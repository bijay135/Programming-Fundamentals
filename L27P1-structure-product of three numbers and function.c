/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 27
Program :WAP find product of three numbers and pass it using function
Date: Feburary 2 , 2017
*/
#include<stdio.h>
#include<conio.h>
struct number{
              int a,b,c;
              }n1;
void mul(struct number n1);
int main()
{
    printf("Enter first number , second number and third number:\n");
    scanf("%d %d %d",&n1.a,&n1.b,&n1.c);
    mul(n1);
}
void mul(struct number n1)
{
    int m;
    m=n1.a*n1.b*n1.c;
    printf("\nThe multiplication is %d",m);
}
