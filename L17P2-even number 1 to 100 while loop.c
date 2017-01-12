/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to print even number from 1 to 100
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
        i++;
    }
    getch();
    return 0;
}
