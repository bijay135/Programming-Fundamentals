/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 2
Program :WAP to find largest number of array
Date : January 26 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int i,array[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[0]<array[i])
            array[0]=array[i];
    }
    printf("The largest element of array is %d",array[0]);
}


