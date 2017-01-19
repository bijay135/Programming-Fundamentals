/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 20
Program :WAP to find factorial using function
Date : January 15 , 2017
*/
#include<stdio.h>
#include<conio.h>
void fact(int n);
int main()
{
    int n;
    printf("Enter the number to find factorial:\n");
    scanf("%d",&n);
    fact(n);
    getch();
    return 0;
}
void fact(int n)
{
    int F=1;
    while(n>0)
    {
        F=F*n;
        n--;
    }
    printf("The factorial is %d",F);
}
