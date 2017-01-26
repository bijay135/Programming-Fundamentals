/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 2
Program :WAP sum of elements in array
Date : January 26 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int i,sum=0,array[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    printf("The sum of array is %d",sum);
}
