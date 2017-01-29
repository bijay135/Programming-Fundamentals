/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 23
Program :WAP count even and odd elements among 10 elements of an array
Date: January 29 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,E,O,array[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nThe even numbers in array are :");
    for(i=0;i<10;i++)
    {
        if(array[i]%2==0)
        {
            E=array[i];
            printf("\n%d",E);
        }
    }
    printf("\nThe odd numbers in array are :");
    for(i=0;i<10;i++)
    {
        if(array[i]%2==1)
        {
            O=array[i];
            printf("\n%d",O);
        }
    }
    getch();
    return 0;
}
