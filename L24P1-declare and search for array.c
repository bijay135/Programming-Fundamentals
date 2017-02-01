/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 24
Program :WAP to declare and search for an array
Date: January 30 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10]={1,7,3,5,9,4,33,10,54,65};
    int i,n,f;
    printf("Enter the number to search:\n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==a[i])
            f=1;
    }
    if(f==1)
        printf("The number exits",n);
    else
        printf("the number does not exit");
    getch();
    return 0;
}
