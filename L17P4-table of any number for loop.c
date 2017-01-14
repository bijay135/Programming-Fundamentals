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
    int n,z,table;
    printf("Enter your number:\n");
    scanf("%d",&n);
    printf("The table for %d is:\n\n",n);
    for(z=1;z<=10;z++)
    {
        table=n*z;
        printf("\n%d * %d = %d\t",n,z,table);
    }
    getch();
    return 0;
}
