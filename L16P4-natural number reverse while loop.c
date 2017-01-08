/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 16
Program :
Date : January 8 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d\t",n);
        n=n-1;
    }
    getch();
    return 0;
}
