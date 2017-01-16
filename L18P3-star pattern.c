/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 18
Program :WAP to print star pattern
         *
         **
         ***
         ****
         *****
Date : January 15 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    for(i=1;i<=5;i++)
    {
        for(n=1;n<=i;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}

