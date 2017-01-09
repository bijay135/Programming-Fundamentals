/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 16
Program : WAP to display natural number from 1 to n using while loop
Date : January 8 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    getch();
    return 0;
}
