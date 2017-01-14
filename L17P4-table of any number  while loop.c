/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to print table of any number
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,z=1,table;
    printf("Enter your number:\n");
    scanf("%d",&n);
    printf("The table for %d is:\n\n",n);
    while(z<=10)
    {
        table=n*z;
        printf("\n%d * %d = %d\t",n,z,table);
        z++;
    }
    getch();
    return 0;
}

