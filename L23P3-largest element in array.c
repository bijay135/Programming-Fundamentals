/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 23
Program :WAP to find largest element among 10 elements in an array
Date: January 29 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,array[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        if(array[0]<array[i])
            array[0]=array[i];
    }
    printf("The largest element of array is %d",array[0]);
    getch();
    return 0;
}


