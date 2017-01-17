/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 19
Program :WAP to find diameter , circumference and area using function
Date : January 15 , 2017
*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
#include<math.h>
void circle(float r);
int main()
{
    float r;
    printf("Enter the radius of circle:\n");
    scanf("%f",&r);
    circle(r);
    return 0;
    getch();
    return 0;
}
void circle(float r)
{
    float D,C,A;
    D=(r*2);
    C=2*pi*r;
    A=pi*pow(r,2);
    printf("The diameter of circle is %f \nThe circumference of circle is %f \nThe area of circle is %f",D,C,A);
}
