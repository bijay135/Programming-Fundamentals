/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 1
Program :WAP to convert CM into M and KM using function
Date : January 19 , 2017
*/
#include<stdio.h>
#include<conio.h>
void convert();
int main()
{
    convert();
    getch();
    return 0;
}
void convert()
{
    float n,x,y;
    printf("Enter the length in centimeter:\n");
    scanf("%f",&n);
    x=(n/100);
    y=(n/100000);
    printf("The conversion of %f into Meter is %f and kilometer is %f",n,x,y);
}
