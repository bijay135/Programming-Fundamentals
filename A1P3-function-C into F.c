/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 1
Program :WAP convert C into F using function
Date : January 19 , 2017
*/
#include<stdio.h>
#include<conio.h>
float CintoF();
int main()
{
    float result;
    result=CintoF();
    printf("The temperature converted into Fahrenheit is %f",result);
    getch();
    return 0;
}
float CintoF()
{
    float c,f;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f",&c);
    f=(c*1.8)+32;
    return f;
}
