/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 28
Program :WAP to demonstrate use of array and pointer
Date: Feburary 5 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int *p;
    int a[10]={12,15,16,17,65,31,45,13,51,32};
    for(i=0;i<10;i++)
    {
        p=&a[i];
        printf("\nThe address of array element %d is %d",i+1,p);
        printf("\nThe value of %d element in pointer is %d",i+1,*p);
        printf("\n");
    }
    getch();
    return 0;
}
