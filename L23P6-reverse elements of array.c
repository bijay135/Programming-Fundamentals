/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 23
Program :WAP to reverse 10 elements of an array
Date: January 29 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,z,R,array[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    printf("The array elements in reverse is:");
    for(i=9;i>=0;i--)
    {
        printf("\n%d",array[i]);
    }
    getch();
    return 0;
}

