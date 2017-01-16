/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 18
Program :WAP print number pattern
         12345
         1234
         123
         12
         1
Date : January 15 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    for(i=5;i>=1;i--)
    {
        for(n=1;n<=i;n++)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    getch();
    return 0;
}
