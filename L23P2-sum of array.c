/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 23
Program :WAP to find sum of 10 elements of array
Date: January 29 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,array[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+array[i];
    }
    printf("The sum of array is %d",sum);
    getch();
    return 0;
}
