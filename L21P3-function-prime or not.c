/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 21
Program :WAP to find prime or not using function
Date : January 22 , 2017
*/
#include<stdio.h>
#include<conio.h>
int prime(int n);
int main()
{
    int n,result;
    printf("Enter your number to check prime or not:\n");
    scanf("%d",&n);
    result=prime(n);
    if(result==2)
        printf("\nNumber is prime");
    else
        printf("\nNumber is composite");
    getch();
    return 0;
}
int prime(int n)
{
    int i=1,count=0,z;
    while(i<=n)
    {
        if(n%i==0)
        {
            count=count+1;
        }
        i++;
    }
    return count;
}
