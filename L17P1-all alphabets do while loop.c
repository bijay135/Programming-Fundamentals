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
    do
    {
        printf("%c\t",sa);
        sa++;
        n++;
    }
    while(n<=26);
    printf("\n\n");
    n=1;
    do
    {
        printf("%c\t",la);
        la++;
        n++;
    }
    while(n<=26);
    getch();
    return 0;
}
