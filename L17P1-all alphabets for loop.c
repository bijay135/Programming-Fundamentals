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
    int n;
    for(n=1;n<=26;n++)
    {
        printf("%c\t",sa);
        sa++;
    }
    printf("\n\n");
    for(n=1;n<=26;n++)
    {
        printf("%c\t",la);
        la++;
    }
    getch();
    return 0;
}
