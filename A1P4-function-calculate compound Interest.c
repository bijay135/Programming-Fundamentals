/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 1
Program :WAP calculate compound Interest using function
Date : January 19 , 2017
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float CI(float p,float t,float r);
int main()
{
    float result,p,t,r;
    printf("Enter your principle:\n");
    scanf("%f",&p);
    printf("Enter your time:\n");
    scanf("%f",&t);
    printf("Enter your Rate:\n");
    scanf("%f",&r);
    result=CI(p,t,r);
    printf("The Compound Interest is : %f",result);
    getch();
    return 0;
}
float CI(float p,float t,float r)
{
    float ci;
    ci=(p*pow((1+r/100),t)-1);
    return ci;
}

