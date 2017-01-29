/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 23
Program :WAP to ask and print 10 elements of array
Date: January 29 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n[10],i;
    for(i=0;i<10;i++)
    {
        printf("Enter your number %d:\n",i+1);
        scanf("%d",&n[i]);
    }

    for(i=0;i<10;i++)
    {
        printf("\nThe array index %d = %d ",i,n[i]);
    }
    getch();
    return 0;
}
