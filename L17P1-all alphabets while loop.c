/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to print alphabets using loop
Date : January 12 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char sa='a';
    char la='A';
    int n=1;
    while(n<=26)
    {
        printf("%c\t",sa);
        sa++;
        n++;
    }
    printf("\n\n");
    n=1;
    while(n<=26)
    {
        printf("%c\t",la);
        la++;
        n++;
    }
    getch();
    return 0;
}
