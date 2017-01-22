/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 21
Program :WAP to print elements of an array
Date : January 22 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter your number %d:\n",i+1);
        scanf("%d",&n[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\nThe array index %d = %d ",i,n[i]);
    }

}
