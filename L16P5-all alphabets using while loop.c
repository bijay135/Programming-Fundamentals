/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 16
Program :
Date : January 8 , 2017
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='a',cp='A';
    int n=1;
    while(n<=26)
    {
        printf("%c\t",ch);
        printf("%c\t",cp);
        ch++;
        n++;
    }
    getch();
    return 0;
}
